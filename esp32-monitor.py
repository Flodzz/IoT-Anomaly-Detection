import os
import time
from dotenv import load_dotenv
from scapy.all import sniff, IP, TCP, UDP, ICMP
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
    # 1. Only process if it's an IP packet
    if IP in packet:
        source_ip = packet[IP].src
        pkt_size = len(packet)
        
        # 2. Identify the Protocol Name
        if TCP in packet:
            protocol_name = "TCP"
        elif UDP in packet:
            protocol_name = "UDP"
        elif ICMP in packet:
            protocol_name = "ICMP"
        else:
            protocol_name = "Other"

        # 3. Create the Data Point
        # We assume 'prediction' is 0 (Safe) for now until your model is active
        point = Point("network_traffic") \
            .tag("device", "esp32_01") \
            .tag("protocol", protocol_name) \
            .tag("src_ip", source_ip) \
            .field("packet_size", pkt_size) \
            .field("prediction", 0) \
            .time(time.time_ns(), WritePrecision.NS)

        # 4. Write to InfluxDB
        write_api.write(bucket=BUCKET, org=ORG, record=point)
        
        print(f"[{protocol_name}] {source_ip} -> {pkt_size} bytes")

# Run the sniffer
try:
    sniff(filter=f"host {ESP32_IP}", prn=process_packet, store=0)
except KeyboardInterrupt:
    print("\nStopping monitor...")
finally:
    client.close()
    