# ultrasonic-servo-control
Arduino project using an HC-SR04 ultrasonic sensor to control an SG90 servo motor based on object distance

# Ultrasonic Sensor with Servo Motor
<img width="720" height="1280" alt="image" src="https://github.com/user-attachments/assets/2a87cb68-ca06-4acc-99d3-23f6c3479e4b" />

## Project Description
This project uses an HC-SR04 Ultrasonic Sensor to measure distance and control an SG90 Servo Motor using an Arduino Uno.

## Components
- Arduino Uno
- HC-SR04 Ultrasonic Sensor
- SG90 Servo Motor
- Breadboard
- Jumper Wires

## Connections
- Ultrasonic Sensor
  - VCC → 5V
  - GND → GND
  - Trig → D9
  - Echo → D10

- Servo Motor
  - Signal → D6
  - VCC → 5V
  - GND → GND

## How it Works
- When an object is detected within 10 cm, the servo motor rotates to 90°.
- When the object moves farther than 10 cm, the servo returns to 0°.

## Files
- Arduino Code (.ino)
- README.md
- Demo Video
