# Simple Humanoid Walking Robot (Arduino + Servo Motors)

This project demonstrates a basic walking motion for a humanoid robot using **4 servo motors** (2 hips + 2 knees) and an Arduino. It creates a simple stepping gait by alternating leg swings and knee bends.

## 🦿 How It Works

The robot alternates between two walking phases:
- When one leg swings forward (via the hip servo), its knee bends to lift it.
- The opposite leg stays straight to support the robot.
- After each step, the servos return to a neutral standing pose.

## ⚙️ Components

- Arduino Uno (or compatible board)
- 4x Servo Motors:
  - Left Hip
  - Right Hip
  - Left Knee
  - Right Knee
- Jumper Wires
- External power supply for servos (recommended)

## 🔌 Servo Pin Configuration

| Servo       | Arduino Pin |
|-------------|-------------|
| Left Hip    | 2           |
| Right Hip   | 3           |
| Left Knee   | 4           |
| Right Knee  | 5           |

> You can change the pins in the code if needed.

## 🧠 Code Behavior

- Uses `Servo.h` to control standard hobby servos.
- Moves each leg forward by adjusting hip angles (`±30°`) and bends knees (`−40°`) for a lifting effect.
- Uses simple delays to time the walking steps.

## 🛠️ Setup Instructions

1. Connect each servo signal wire to the correct Arduino pin.
2. Power your servos using an external 5–6V source (not directly from Arduino).
3. Upload the code from `robot_walk.ino` to your Arduino.
4. Place your robot on a stable surface and observe the walking steps.

## 📸 Demo

![chrome_kCEG83Qogk](https://github.com/user-attachments/assets/7d4234c8-2a1d-4310-be5f-f861552e12ae)
