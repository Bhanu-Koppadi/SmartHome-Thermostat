# 🌡️ Smart Home: Adaptive Thermostat System

An IoT-based project designed to monitor environmental conditions and intelligently control appliances to optimize energy consumption. This system simulates a smart thermostat using temperature and humidity sensors with real-time automation logic.

## 📌 Project Overview

This project tackles the inefficiency of traditional thermostats by building an adaptive thermostat system. It leverages IoT sensors to read room conditions and takes action (represented via LED) when conditions exceed comfort thresholds.

## 🔧 Technologies Used

- **Platform:** Arduino Uno  
- **Sensors:** DHT11 (Temperature + Humidity)  
- **Programming Language:** C++ (Arduino IDE)  
- **Output:** LED (represents cooling system)

## 🧠 Features

- Automatically detects hot and humid environments.
- Activates cooling (LED light) when thresholds are exceeded.
- Deactivates when environment returns to normal.
- Demonstrates real-world energy-saving automation in a cost-effective prototype.

## 🛠️ Hardware Components

| Component          | Description                               |
|--------------------|-------------------------------------------|
| Arduino Uno        | Microcontroller unit                      |
| DHT11 Sensor       | Measures temperature and humidity         |
| LED                | Simulates activation of a fan/AC          |
| Jumper Wires       | Used for circuit connections              |
| Breadboard         | Circuit prototyping platform              |

## 🧩 Circuit Diagram

> Refer to the PPT or Smart Home Theromostat pdf for full wiring details.

## ⚙️ Working Principle

1. DHT11 continuously reads temperature and humidity.
2. Arduino checks if readings exceed defined thresholds:
   - Temperature > 30°C
   - Humidity > 70%
3. If either is true, the LED turns ON (indicating fan/AC ON).
4. Otherwise, the LED remains OFF.
## 🌍 Applications
Residential homes

Smart buildings

Energy-efficient infrastructure

Smart cities

## 🚀 Future Scope
Integration with IoT dashboards (like Blynk or ThingsBoard).

Real-time mobile app control.

Advanced ML-based pattern learning for predictive automation.
## 📁 Repository Structure
📦 SmartHome-Thermostat/

├── 📄 README.md

├── 🧠 MAIN_PROJECT1.ino   # Arduino source code

├── 🖼️ Smart-Homes-Adaptive-Thermostat-System.pptx  # Project presentation

└── 📝 Smart Home Thermostat.pdf # Project report
## 📬 Contact  

For queries or collaboration, feel free to reach out on [LinkedIn](https://www.linkedin.com/in/bhanu-koppadi/) or [GitHub](https://github.com/Bhanu-Koppadi).


