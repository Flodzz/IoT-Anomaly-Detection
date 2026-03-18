import os
import time
from dotenv import load_dotenv
from influxdb_client import InfluxDBClient, Point, WritePrecision
from influxdb_client.client.write_api import SYNCHRONOUS

load_dotenv()

TOKEN = os.getenv("INFLUX_TOKEN")
ORG = os.getenv("INFLUX_ORG")
BUCKET = os.getenv("INFLUX_BUCKET")
URL = os.getenv("INFLUX_URL")
ESP32_IP = os.getenv("ESP32_IP")

client = InfluxDBClient(url=URL, token=TOKEN, org=ORG)
write_api = client.write_api(write_options=SYNCHRONOUS)

print("Sending Anomaly to trigger alert...")

point = Point("network_traffic") \
    .tag("device", "esp32_01") \
    .tag("protocol", "TEST") \
    .field("packet_size", 999) \
    .field("prediction", 1) \
    .time(time.time_ns(), WritePrecision.NS)

write_api.write(bucket=BUCKET, record=point)

print("Data sent.")
