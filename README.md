# Four Servo Control

Arduino-based control system for four servo motors performing a synchronized sweep motion for 2 seconds, followed by a 90° hold position.

## Overview

This project demonstrates synchronized control of four servo motors using an Arduino Uno.

The system performs two main actions:

1. All four servo motors perform a synchronized sweep motion between 0° and 180° for 2 seconds.
2. After the sweep is completed, all four servo motors move to and hold a 90° position.

## Components

- Arduino Uno
- 4 × Servo Motors
- Breadboard
- Jumper Wires
- Tinkercad Circuits

## Servo Connections

| Servo | Signal Pin |
|------|------------|
| Servo 1 | D7 |
| Servo 2 | D8 |
| Servo 3 | D9 |
| Servo 4 | D10 |

All four servo motors share the Arduino 5V and GND connections through the breadboard.

## Circuit Diagram

The circuit was designed and simulated using Tinkercad Circuits.

![Four Servo Control Circuit](Circuit_diagram.png)

## How It Works

The Arduino Servo library is used to control the angular position of each servo motor.

During the first 2 seconds, all four motors perform a synchronized sweep from 0° to 180° and back.

After the 2-second sweep period, the motion stops and all four servo motors move to 90° and hold that position.

## Simulation Demo

The simulation demonstrates the complete operation of the system, including the synchronized sweep motion and final 90° hold position.

▶️ [Watch the Simulation Demo](Circuit_demo.mp4)


## Result

The four servo motors successfully perform the required synchronized sweep motion for 2 seconds and then hold at 90°.
