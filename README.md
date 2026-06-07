# PIR Motion Detection Alarm System

An Arduino-based motion detection alarm system using a PIR sensor, LED, and buzzer.

## Project Overview

This project detects motion using a PIR (Passive Infrared) sensor. When movement is detected, an LED lights up and a buzzer sounds as an alarm.

## Features

* Motion detection using PIR sensor
* Audible alarm with buzzer
* Visual indication with LED
* Real-time monitoring
* Simple and low-cost implementation

## Components Used

* Arduino Uno
* PIR Motion Sensor
* LED
* Buzzer
* Jumper Wires
* Breadboard

## Circuit Connections

| Component         | Arduino Pin |
| ----------------- | ----------- |
| PIR Sensor Output | D7          |
| Buzzer            | D6          |
| LED               | D5          |

## How It Works

1. The PIR sensor continuously monitors movement.
2. When motion is detected:

   * The PIR sensor outputs HIGH.
   * The LED turns on.
   * The buzzer activates.
3. After a short delay, the alarm turns off.
4. The system continues monitoring for movement.

## Arduino Code

The project uses:

* `digitalRead()` to read PIR sensor data.
* `digitalWrite()` to control the LED and buzzer.
* `delay()` for timing control.

## Technologies Used

* Arduino IDE
* C/C++
* Embedded Systems

## Project Structure

```text
PIR-Motion-Detection-System/
│
├── motion_alarm.ino
├── circuit_diagram.png
└── README.md
```

## Applications

* Home security systems
* Intruder detection
* Smart home automation
* Office monitoring
* Motion-triggered alerts

## Learning Outcomes

This project demonstrates:

* Sensor integration
* Digital input/output operations
* Arduino programming
* Embedded systems fundamentals
* Basic alarm system development

## Future Improvements

* LCD display integration
* GSM/SMS notification system
* Mobile app integration
* IoT connectivity using ESP8266/ESP32
* Adjustable alarm sensitivity
* Multiple sensor support

## Author

Engin Ataman
# PIR-Motion-Detection-Alarm-System
