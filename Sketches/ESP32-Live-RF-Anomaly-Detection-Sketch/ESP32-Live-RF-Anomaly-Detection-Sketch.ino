#include <Adafruit_NeoPixel.h>
#include "esp_wifi.h"
#include "model_data.h"

// LED settings
#define PIN 8
#define NUMPIXELS 1
Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_RGB + NEO_KHZ800);

// Global flag to tell the loop an attack happened
volatile bool attack_found = false;

// Global variables for live features
uint32_t last_pkt_time = 0;
uint32_t total_bytes_in_window = 0;
uint32_t window_start_time = 0;
const uint32_t throughput_window_ms = 1000; // 1 second window

void wifi_promiscuous_cb(void* buf, wifi_promiscuous_pkt_type_t type) {
    // We only care about Data Packets (type 2)
    if (type != WIFI_PKT_DATA) return;

    wifi_promiscuous_pkt_t *pkt = (wifi_promiscuous_pkt_t *)buf;
    uint8_t *payload = pkt->payload;
    uint32_t len = pkt->rx_ctrl.sig_len;

    // Inter-Arrival Time (IAT)
    uint32_t now = esp_timer_get_time(); // Microseconds
    double iat = (last_pkt_time == 0) ? 0 : (double)(now - last_pkt_time) / 1000000.0;
    last_pkt_time = now;

    // Throughput Calculation (Bytes per second)
    total_bytes_in_window += len;
    if ((now - window_start_time) > (throughput_window_ms * 1000)) {
        // Reset window every second
        window_start_time = now;
        total_bytes_in_window = 0; 
    }
    double throughput = (double)total_bytes_in_window; 

    // Header Parsing (Simplified offsets)
    // Note: In a real dissertation, explain that 24 is the standard MAC header offset
    uint16_t src_port = (payload[34] << 8) | payload[35];
    uint16_t dest_port = (payload[36] << 8) | payload[37];
    double avg_packet_size = (double)len; // For a single packet, avg is its own size

    // Feature Vector
    double raw_features[5] = {
        (double)dest_port,
        avg_packet_size,
        throughput,
        (double)src_port,
        iat
    };

    // Scale
    double scaled[5];
    for(int i = 0; i < 5; i++) {
        scaled[i] = (raw_features[i] - medians[i]) / iqrs[i];
    }

    // Inference
    if (score(scaled) == 1) {
        Serial.printf("[!] ATTACK: Port %d -> %d | IAT: %.6f\n", src_port, dest_port, iat);
        attack_found = true;
    }
}

void setup() {
    Serial.begin(115200);

    // Initialize NeoPixel
    pixels.begin();
    pixels.setBrightness(0); // Start OFF
    pixels.show();

    nvs_flash_init();
    esp_netif_init();
    esp_event_loop_create_default();
    wifi_init_config_t cfg = WIFI_INIT_CONFIG_DEFAULT();
    esp_wifi_init(&cfg);
    esp_wifi_set_storage(WIFI_STORAGE_RAM);
    esp_wifi_set_mode(WIFI_MODE_NULL);
    esp_wifi_start();
    esp_wifi_set_promiscuous(true);
    esp_wifi_set_promiscuous_rx_cb(&wifi_promiscuous_cb);
}

void loop() {
    if (attack_found) {
        // Visual Alert
        pixels.setBrightness(50);
        pixels.setPixelColor(0, pixels.Color(255, 0, 0)); // Red
        pixels.show();
        delay(10000); 
        pixels.setBrightness(0);
        pixels.setPixelColor(0, pixels.Color(0, 0, 0));
        pixels.show();
        
        attack_found = false; // Clear the flag
    }
    // Tiny delay to keep the background tasks happy
    delay(1); 
}