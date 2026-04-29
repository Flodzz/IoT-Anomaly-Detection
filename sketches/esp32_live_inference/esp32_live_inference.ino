#include "esp_wifi.h"
#include "esp_event.h"
#include "nvs_flash.h"
#include "optimised_rf_model.h"
#include "model_data.h"

uint32_t last_micros = 0;       // For IAT calculation
uint32_t window_bytes = 0;      // For throughput calculation
uint32_t last_window_ms = 0;    // To track the 1-second throughput window

// Track packets from source ports
struct FlowStats {
    uint16_t port;
    uint32_t total_bytes;
    uint32_t packet_count;
};

// Track the last 5 active source ports to save memory
FlowStats flow_buffer[5]; 
int flow_index = 0;

void wifi_promiscuous_cb(void* buf, wifi_promiscuous_pkt_type_t type) {
    // Only process Data packets
    if (type != WIFI_PKT_DATA) return;

    wifi_promiscuous_pkt_t *pkt = (wifi_promiscuous_pkt_t *)buf;
    uint8_t *payload = pkt->payload;
    uint32_t len = pkt->rx_ctrl.sig_len;
        
    // Port extraction
    uint16_t src_p = (payload[34] << 8) | payload[35];
    uint16_t dst_p = (payload[36] << 8) | payload[37];

    // IAT Calculation
    uint32_t now = micros();
    double iat = (last_micros == 0) ? 0 : (double)(now - last_micros) / 1000000.0;
    last_micros = now;


    int packet_size = len;

    // Throughput calculation
    double throughput = (double)packet_size/iat;

    // Organise features into correct order ready for inference
    double raw_features[5] = {
        (double)dst_p,
        packet_size,
        throughput,
        (double)src_p,
        iat
    };

    // Scale and Clip features
    double scaled_features[5];
    for(int i = 0; i < 5; i++) {
        double divisor = (iqrs[i] > 0) ? iqrs[i] : 1.0;
        double scaled = (raw_features[i] - medians[i]) / divisor;
        
        scaled_features[i] = scaled;
    }

    // Print scaled features
    Serial.print("SCALED: ");
    for(int i = 0; i < 5; i++) {
        Serial.print(scaled_features[i]);
        Serial.print("  ");
    }
    Serial.println();

    // Inference
    double result[2];
    score(scaled_features, result);

    // Result
    if (result[1] > result[0]) {
        Serial.printf("[!!!] ATTACK DETECTED | Dest Port: %d | Avg Size: %f | Throughput: %f | Src Port: %d | IAT: %f\n", dst_p, packet_size, throughput, src_p, iat);
    }
    if (result[1] < result[0]) {
        Serial.printf("[!!!] Benign DETECTED | Src Port: %d | Dest Port: %d\n", src_p, dst_p);
    }

}

void setup() {
    Serial.begin(115200);
    delay(2000);
    Serial.println("\n--- ESP32-C6 Live Sniffer: Hello World ---");

    // Standard ESP32 WiFi Initialization
    nvs_flash_init();
    esp_netif_init();
    esp_event_loop_create_default();
    wifi_init_config_t cfg = WIFI_INIT_CONFIG_DEFAULT();
    esp_wifi_init(&cfg);
    esp_wifi_set_storage(WIFI_STORAGE_RAM);
    esp_wifi_set_mode(WIFI_MODE_NULL); // Don't connect to an AP
    esp_wifi_start();

    // Enable Promiscuous Mode
    esp_wifi_set_promiscuous(true);
    esp_wifi_set_promiscuous_rx_cb(&wifi_promiscuous_cb);
    
    Serial.println("Sniffer Started. Waiting for packets...");
}

void loop() {
    // Background tasks
    delay(10);
}