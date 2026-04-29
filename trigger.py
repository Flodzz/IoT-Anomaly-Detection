"""
ESP32 RF-IDS Alert Trigger (Burst Mode)
=========================================
Simulates real-time network traffic by sending bursts of packets with specific Inter-Arrival Times (IAT) to the ESP32-C6.
"""

import socket
import struct
import time
import argparse
import sys

# Default Port
ESP32_UDP_PORT = 4210
# Number of packets to send in a burst to the ESP32
BURST_COUNT = 20


def send_profile(ip, port, src_port, dst_port, pkt_size, label, iat_target):
    """
    Sends a burst of packets to simulate a steady network flow.
    The delay between packets (IAT) is controlled to match dataset profiles.
    """
    print(f"Replaying {'ATTACK' if label == 1 else 'BENIGN'} profile...")
    print(f"Target IAT: {iat_target}s | Total Packets: {BURST_COUNT}")

    for i in range(BURST_COUNT):
        # Pack into the 7-byte format: SrcPort(H), DstPort(H), Size(H), Label(B)
        packet = struct.pack(">HHHB", src_port, dst_port, pkt_size, label)

        try:
            with socket.socket(socket.AF_INET, socket.SOCK_DGRAM) as sock:
                sock.sendto(packet, (ip, port))

            # The sleep timing simulates the Inter-Arrival Time.
            # We subtract a tiny constant (0.0005) to account for Python's processing time.
            if i < BURST_COUNT - 1:  # Don't sleep after the last packet
                time.sleep(max(0, iat_target - 0.0005))

        except Exception as e:
            print(f"Error during burst at packet {i}: {e}")
            break

    print("Burst complete.\n")


def main():
    parser = argparse.ArgumentParser(description="ESP32-C6 IDS Trigger Test Utility")
    parser.add_argument("--ip", required=True, help="The IP address of the ESP32-C6")
    parser.add_argument("--port", type=int, default=ESP32_UDP_PORT, help="UDP port")

    args = parser.parse_args()

    print(f"--- ESP32-C6 IDS Burst Trigger ({args.ip}:{args.port}) ---")
    print("Profiles calibrated for IoT-23 Feature extraction.")
    print("Press 'a' for Attack, 'b' for Benign, 'q' to quit")

    while True:
        try:
            choice = input("> ").lower()
            if choice == 'a':
                # ATTACK PROFILE: High frequency (Small IAT), Small packets
                # Using IAT = 0.001s (1000 packets per second)
                send_profile(args.ip, args.port, 56661, 81, 40, 1, iat_target=0.001)

            elif choice == 'b':
                # BENIGN PROFILE: Normal frequency (Larger IAT), Larger packets
                # Using IAT = 0.5s (2 packets per second)
                send_profile(args.ip, args.port, 44374, 443, 1000, 0, iat_target=0.2)

            elif choice == 'q':
                print("Exiting...")
                sys.exit(0)

        except KeyboardInterrupt:
            print("\nExiting...")
            sys.exit(0)


if __name__ == "__main__":
    main()
