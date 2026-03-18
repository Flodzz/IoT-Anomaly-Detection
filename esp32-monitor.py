import os
import time
from dotenv import load_dotenv
from scapy.all import sniff, IP
from influxdb_client import InfluxDBClient, Point, WritePrecision
from influxdb_client.client.write_api import SYNCHRONOUS

# Load variables from .env
load_dotenv()

TOKEN = os.getenv("INFLUX_TOKEN")
ORG = os.getenv("INFLUX_ORG")
BUCKET = os.getenv("INFLUX_BUCKET")
URL = os.getenv("INFLUX_URL")
ESP32_IP = os.getenv("ESP32_IP")

# Initialize InfluxDB Client
client = InfluxDBClient(url=URL, token=TOKEN, org=ORG)
write_api = client.write_api(write_options=SYNCHRONOUS)

print(f"--- Monitoring {ESP32_IP} (Connected to {BUCKET}) ---")

def process_packet(packet):
    if packet.haslayer(IP):
        # Filter for traffic involving the ESP32
        if packet[IP].src == ESP32_IP or packet[IP].dst == ESP32_IP:
            
            # Simple feature extraction for the dashboard
            pkt_size = len(packet)
            
            point = Point("network_traffic") \
                .tag("device", "esp32_edge") \
                .field("packet_size", float(pkt_size)) \
                .time(time.time_ns(), WritePrecision.NS)

            try:
                write_api.write(bucket=BUCKET, record=point)
                # This helps you see it's working in the terminal
                print(f"Captured: {pkt_size} bytes", end='\r') 
            except Exception as e:
                print(f"\nError: {e}")

# Run the sniffer
try:
    sniff(filter=f"host {ESP32_IP}", prn=process_packet, store=0)
except KeyboardInterrupt:
    print("\nStopping monitor...")
finally:
    client.close()
    