# Network Port Scanner Simulation

A lightweight cybersecurity automation utility written in C++ that simulates a network diagnostic port scanner. The program iterates through common port configurations to identify open, vulnerable communication pipelines.

## Features
* **Array-Mapped Network Vectors:** Utilizes an integer array infrastructure to store standard real-world network port identifiers (such as SSH, HTTP, NetBIOS).
* **Automated Firewall Interception:** Employs explicit conditional loops (`for` and `if/else` matrices) to check individual hardware sockets and isolate security vulnerabilities.
* **Formatted Security Diagnostics:** Streams clean logging flags directly to the console interface to separate operational system info from explicit security alerts.

## How to Compile & Run
Compile using your standard C++ optimization compiler:
```bash
g++ main.cpp -o port_scanner
