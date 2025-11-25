# SysMon – Terminal System Monitor in C

Welcome to **SysMon**, a lightweight, real-time system monitor written entirely in **C**!
It’s a mini `htop`/`top` clone that runs in your terminal and displays your system stats in real time.

---

## 🌟 Features

* **CPU Usage** – See your CPU load every second.
* **Memory Usage** – Track free and total RAM.
* **System Uptime** – How long your system has been running.
* **Processes Count** – Number of running processes.
* **Disk Usage** – Free vs total storage.
* **Network Traffic** – Download and upload speed per interface.
* **GPU Usage (Optional)** – NVIDIA GPU utilization.
* **Live Terminal UI (Optional)** – Refreshing ncurses dashboard for a “top”-like experience.

---

## 💻 Requirements

* Linux environment (WSL recommended for Windows)
* GCC compiler
* Optional: NVIDIA GPU for GPU stats
* Optional: ncurses library for full dashboard UI

---

## 🚀 How to Run

1. Clone the repository:

```bash
git clone https://github.com/MahdiZoabi97/sysmon.git
cd sysmon
```

2. Compile:

```bash
gcc -Iinclude src/*.c -o sysmon
```

3. Run:

```bash
./sysmon
```

> On Windows with WSL, make sure to run inside WSL for `/proc` access.

---

## 🎨 Future Improvements

* Color-coded CPU/memory bars
* Per-core CPU stats
* Interactive dashboard with sorting/filtering
* Support for multiple network interfaces
* Remote monitoring via SSH

---

## ⚡ About

Created by **Mahdi Zoabi**.
This project is a fun way to practice **C programming**, Linux system calls, and real-time data visualization in the terminal.

---

## 📂 File Structure

```
sysmon/
├─ include/        # Header files for CPU, memory, uptime, etc.
├─ src/            # Source code files
├─ README.md       # This file
└─ sysmon          # Compiled binary (after build)
```

---

## 📝 License

This project is open-source. Feel free to use, modify, and contribute!
