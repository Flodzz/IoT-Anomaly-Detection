#include <WiFi.h>
#include <WiFiUdp.h>
#include "optimised_rf_model.h"
#include "model_data.h"
#include "WifiCredentials.h"
#include <Adafruit_NeoPixel.h>

// --- ESP32 LED ----------------------------------------------------------------
#define LED_PIN 8
Adafruit_NeoPixel pixels(1, LED_PIN, NEO_RGB + NEO_KHZ800);

// -- UDP listener --------------------------------------------------------------
// Python script sends packets to this port on the ESP32's IP address.
#define UDP_PORT 4210
WiFiUDP udp;

// -- Features Extracted from Packet --------------------------------------------
struct PacketDescriptor {
    uint16_t src_port;
    uint16_t dst_port;
    uint16_t ip_len;
    uint8_t label;      // ground truth
};

// -- Flow Metrics  -------------------------------------------------------------
struct FlowStats {
    uint32_t key;       // src_port<<16 | dst_port
    uint32_t start_ms;
    uint32_t total_ip_bytes;
    uint32_t packet_count;
};

// -- Create buffer to store 16 concurrent flows --------------------------------
static FlowStats flow_buffer[16];
static const uint8_t FLOW_BUF_SIZE = sizeof(flow_buffer) / sizeof(flow_buffer[0]);

FlowStats* get_flow(uint16_t src_p, uint16_t dst_p) {
    uint32_t key = ((uint32_t)src_p << 16) | dst_p;

    for (uint8_t i = 0; i < FLOW_BUF_SIZE; i++) {
        if (flow_buffer[i].key == key) return &flow_buffer[i];
    }

    uint8_t oldest = 0;

    for (uint8_t i = 1; i < FLOW_BUF_SIZE; i++) {
        if (flow_buffer[i].start_ms < flow_buffer[oldest].start_ms)
            oldest = i;
    }

    flow_buffer[oldest] = {key, (uint32_t)millis(), 0, 0};
    return &flow_buffer[oldest];
}

// -- IAT tracking -------------------------------------------------------------
static uint32_t last_pkt_micros = 0;

// -- Packet wire format (sent by Python script) -------------------------------
// Each UDP datagram = 12 bytes:
// [0-1] src_port (uint16, big-endian)
// [2-3] dst_port (uint16, big-endian)
// [4-5] ip_total_len (uint16, big-endian)
// [6] label: 0=benign, 1=attack (ground truth from Python, for eval)
// [7-11] padding (0x00)
// The ESP32 computes IAT and throughput itself from arrival timing.

// -- Confusion Matrix counters ------------------------------------------------
static uint32_t tp = 0, tn = 0, fp = 0, fn = 0, total = 0;

void print_stats() {
    uint32_t attacks_sent = tp + fn;
    uint32_t benign_sent = tn + fp;
    float precision = (tp + fp) > 0 ? 100.0f * tp / (tp + fp) : 0;
    float recall = (tp + fn) > 0 ? 100.0f * tp / (tp + fn) : 0;
    float accuracy = total > 0 ? 100.0f * (tp + tn) / total : 0;
    float f1 = (precision + recall) > 0 ? 2 * precision * recall / (precision + recall) : 0;

    Serial.println("\n╔═══════════════════════════════╗");
    Serial.println("║          EVAL STATS           ║");
    Serial.printf("║ %-18s : %8d ║\n", "Total packets", total);
    Serial.printf("║ %-18s : %8d ║\n", "Attacks sent", attacks_sent);
    Serial.printf("║ %-18s : %8d ║\n", "Benign sent", benign_sent);
    Serial.println("╠═══════════════════════════════╣");
    Serial.printf("║ TP: %-9d | FP: %-9d ║\n", tp, fp);
    Serial.printf("║ FN: %-9d | TN: %-9d ║\n", fn, tn);
    Serial.println("╠═══════════════════════════════╣");
    Serial.printf("║ %-18s : %7.1f%% ║\n", "Accuracy", accuracy);
    Serial.printf("║ %-18s : %7.1f%% ║\n", "Precision", precision);
    Serial.printf("║ %-18s : %7.1f%% ║\n", "Recall", recall);
    Serial.printf("║ %-18s : %7.1f%% ║\n", "F1 Score", f1);
    Serial.println("╚═══════════════════════════════╝\n");
}

// -- Process one incoming packet descriptor --------------------------------------------
void process_packet(const PacketDescriptor& pd) {
    uint32_t now_us = micros();

    // Calculate IAT
    if (last_pkt_micros == 0) {
        last_pkt_micros = now_us;
        return;
    }
    double iat = (double)(now_us - last_pkt_micros) / 1e6;
    last_pkt_micros = now_us;

    // Flow Feature Extraction
    FlowStats* f = get_flow(pd.src_port, pd.dst_port);
    f->total_ip_bytes += pd.ip_len;
    f->packet_count++;

    // Calculate Average Packet Size
    double avg_pkt_size = (double)f->total_ip_bytes / f->packet_count;

    // Calculate Throughput
    uint32_t elapsed_ms = millis() - f->start_ms;
    double throughput;
    if (elapsed_ms == 0) throughput = (double)pd.ip_len;
    else throughput = (double)f->total_ip_bytes / ((double)elapsed_ms / 1000.0);
    // -------------------------------

    // Feature vector: dst_port, packet_size, throughput, src_port, iat
    double raw[5] = {
        (double)pd.dst_port,
        avg_pkt_size,
        throughput,
        (double)pd.src_port,
        iat
    };

    // RobustScaler
    double scaled[5];
    for (int i = 0; i < 5; i++) {
        scaled[i] = (raw[i] - medians[i]) / iqrs[i];
    }

    double result[2];
    score(scaled, result);

    bool predicted_attack = (result[1] > result[0]);
    bool true_attack = (pd.label == 1);
    double conf = predicted_attack ? result[1] : result[0];
    total++;

    // -- Alert ------------------------------------------------------------------------
    updateAlertStatus(predicted_attack);

    // Confusion matrix
    if (predicted_attack && true_attack) tp++;
    else if (!predicted_attack && !true_attack) tn++;
    else if (predicted_attack && !true_attack) fp++;
    else fn++;

    // Per-packet log
    const char* pred_str = predicted_attack ? "ATTACK" : "OK";
    const char* label_str = true_attack ? "ATK" : "BEN";
    const char* correct = (predicted_attack == true_attack) ? " " : "✗";

    // Commented out due to using up too much time from the CPU
    // Serial.printf("[%s] %s gt=%-3s src=%5d dst=%5d size=%4d tput=%8.1f iat=%.5f conf=%.3f\n",
    //     correct, pred_str, label_str,
    //     pd.src_port, pd.dst_port, pd.ip_len,
    //     throughput, iat, conf);

    // // Print rolling stats every 50 packets
    // if (total % 50 == 0) print_stats();
}

void process_packet(const PacketDescriptor& pd);

//
void setupLED() {
    pixels.begin();
    pixels.setBrightness(50);
    pixels.setPixelColor(0, 0, 255, 0); // Start Green (Benign)
    pixels.show();
}

void updateAlertStatus(bool isAttack) {
    if (isAttack) {
        pixels.setPixelColor(0, 255, 0, 0); // Red for Anomaly
    } else {
        pixels.setPixelColor(0, 0, 255, 0); // Green for Normal
    }
    pixels.show();
}

// -- Setup ----------------------------------------------------------------
void setup() {
    Serial.begin(921600);
    WiFi.setSleep(false);
    setupLED();
    delay(1000);

    Serial.println("╔══════════════════════════════════════╗");
    Serial.println("║     ESP32-C6 RF-IDS UDP Receiver     ║");
    Serial.println("╚══════════════════════════════════════╝");

    memset(flow_buffer, 0, sizeof(flow_buffer));

    // -- Connect to WiFi ---------------------------------------------------------
    WiFi.begin(WIFI_SSID, WIFI_PASS);
    Serial.print("Connecting to WiFi");
    while (WiFi.status() != WL_CONNECTED) {
        delay(500);
        Serial.print(".");
    }
    Serial.printf("\nConnected! IP: %s\n", WiFi.localIP().toString().c_str());

    udp.begin(UDP_PORT);
    Serial.printf("Listening on UDP port %d\n", UDP_PORT);
    Serial.println("Waiting for traffic from laptop...\n");
}

// -- Loop -------------------------------------------------------------------------------
void loop() {
    int pkt_size = udp.parsePacket();
    if (pkt_size >= 7) {
        uint8_t buf[12];
        udp.read(buf, sizeof(buf));

        PacketDescriptor pd;
        pd.src_port = (buf[0] << 8) | buf[1];
        pd.dst_port = (buf[2] << 8) | buf[3];
        pd.ip_len = (buf[4] << 8) | buf[5];
        pd.label = buf[6];

        process_packet(pd);
    }

    // Print final stats if serial input 's' received
    if (Serial.available() && Serial.read() == 's') {
        print_stats();
    }
}
