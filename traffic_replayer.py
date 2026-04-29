"""
ESP32 RF-IDS Traffic Replayer
=========================================
Replays 200 real samples from IoT-23 via UDP.
Format: [0-1] src_port, [2-3] dst_port, [4-5] ip_len, [6] label

Usage:
    python traffic_replayer.py --ip x.x.x.x --port 4210
"""

import argparse
import socket
import struct
import time
import pandas as pd

ESP32_UDP_PORT = 4210


def make_packet(src_port: int, dst_port: int, ip_len: int, label: int) -> bytes:
    """Pack into the 7-byte wire format the ESP32 expects."""
    return struct.pack(">HHHB", src_port, dst_port, ip_len, label)


def run_replay(esp32_ip: str, esp32_port: int, csv_path: str):
    # Load the exported CSV
    try:
        test_data = pd.read_csv("data/esp32_test_data.csv")
    except FileNotFoundError:
        print(f"Error: {csv_path} not found. Generate the CSV first!")
        return

    sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
    total_packets = len(test_data)

    w = 40
    print(f"╔{'═' * (w+2)}╗")
    print(f"║ {'ESP32 RF-IDS Traffic Replayer':^{w}} ║")
    print(f"╠{'═' * (w+2)}╣")
    print(f"║ {f'Target IP : {esp32_ip}':<{w}} ║")
    print(f"║ {f'Target Port: {esp32_port}':<{w}} ║")
    print(f"║ {f'Samples    : {total_packets}':<{w}} ║")
    print(f"╚{'═' * (w+2)}╝")

    print("\nStarting replay")

    for i, row in test_data.iterrows():
        # Extract features from CSV
        src_port = int(row['source_port'])
        dst_port = int(row['dest_port'])
        ip_len = int(row['ip_bytes_sent_from_source'])
        label = int(row['is_attack'])

        # We need the IAT to pace the delivery
        iat = float(row['inter_arrival_time'])

        # Create binary packet
        pkt = make_packet(src_port, dst_port, ip_len, label)

        # Pace the transmission
        # This allows the ESP32 to calculate the correct IAT internally
        time.sleep(max(iat, 0.01))

        # Send to ESP32
        sock.sendto(pkt, (args.ip, ESP32_UDP_PORT))

        # Console Log
        tag = "ATTACK" if label == 1 else "BENIGN"
        print(f"[{i+1:3d}/{total_packets}] {tag:6s} | src={src_port:5d} dst={dst_port:5d} len={ip_len:4d} B")

    sock.close()
    print(f"\nReplay Complete.")
    print(f"Send 's' in Arduino Serial Monitor to see the Confusion Matrix.")


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description="Replay CSV traffic to ESP32")
    parser.add_argument("--ip", required=True, help="ESP32 IP address")
    parser.add_argument("--port", type=int, default=ESP32_UDP_PORT, help="UDP port")
    parser.add_argument("--csv", default="data/esp32_test_data.csv", help="Path to test CSV")
    args = parser.parse_args()

    run_replay(args.ip, args.port, args.csv)
