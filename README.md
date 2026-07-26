# ultrasonic-servo-control
Arduino project using an HC-SR04 ultrasonic sensor to control an SG90 servo motor based on object distance

# Ultrasonic Sensor with Servo Motor
<img width="1242" height="679" alt="image" src="https://github.com/user-attachments/assets/afd26bb4-ffe3-498a-a319-343dad7e060c" />

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
