# 🤖 Arduino Motor Control & Obstacle Detection

## 📌 Project Overview

This project was developed using **Arduino Uno** to implement two different motor control tasks. The project demonstrates how to control multiple DC motors using the **L293D Motor Driver**, as well as how to integrate a **Servo Motor** with an **HC-SR04 Ultrasonic Sensor** for basic obstacle detection.

The implementation was completed using **Tinkercad** for circuit simulation and Arduino IDE programming.

---

# 📂 Project Tasks

This repository contains two parts:

### 🚗 Part 1 – DC Motor Control using L293D

Control four DC motors using the L293D Motor Driver with the following movement sequence:

- ▶️ Move Forward for **30 seconds**
- ◀️ Move Backward for **60 seconds**
- ↪️ Turn Right and Left alternately for **60 seconds**
- ⏹️ Stop after completing the sequence

The project demonstrates basic motor direction control using digital output pins and the L293D driver.

---

### 🤖 Part 2 – Servo Motor & Ultrasonic Sensor

A Servo Motor and HC-SR04 Ultrasonic Sensor were added to create a simple obstacle detection system.

System behavior:

- 📏 Measure the distance continuously using the ultrasonic sensor.
- 🚧 If an object is detected at **10 cm or less**, the servo rotates to **90°**.
- 🔄 When the object moves away (greater than 10 cm), the servo returns to its original position (**0°**).
- 💡 An LED lights up whenever the servo rotates after detecting an obstacle.

---

# 🛠 Components Used

- Arduino Uno
- L293D Motor Driver
- 4 × DC Motors
- Servo Motor
- HC-SR04 Ultrasonic Sensor
- Breadboard
- Jumper Wires
- 9V Battery
- LED
- 220Ω Resistor

---

# 💻 Software Used

- Arduino IDE
- Tinkercad

---

# ⚙️ Circuit Description

### Part 1

The circuit uses the L293D Motor Driver to control four DC motors through the Arduino Uno. Digital pins are responsible for changing the rotation direction while the enable pins control the motor operation.

### Part 2

The HC-SR04 Ultrasonic Sensor continuously measures the distance in front of the system. When the measured distance becomes less than or equal to 10 cm, the Arduino commands the Servo Motor to rotate to 90°. When the obstacle is removed, the servo returns to its initial position.

---

# 📷 Circuit Images

## Part 1

### Circuit Diagram

(Add your circuit image here)

### Simulation

(Add your simulation image here)

---

## Part 2

### Circuit Diagram

(Add your circuit image here)

### Simulation

(Add your simulation image here)

---

# 📜 Arduino Code

The repository includes:

- 📄 Part1_DC_Motors.ino
- 📄 Part2_Servo_Ultrasonic.ino

---

# ▶️ How to Run

1. Open the project in Tinkercad.
2. Build the circuit according to the provided diagram.
3. Upload the Arduino code.
4. Start the simulation.
5. Observe the movement sequence of the DC motors.
6. Place an object in front of the ultrasonic sensor.
7. When the object is within 10 cm, the servo rotates to 90°.
8. Move the object away and observe the servo returning to its initial position.

---

# ⚠️ Challenges Faced

During this project several challenges were encountered, including:

- Correctly wiring the L293D Motor Driver.
- Synchronizing the movement of all DC motors.
- Configuring the Servo Motor with the Ultrasonic Sensor.
- Ensuring stable power distribution between all components.
- Understanding the HC-SR04 trigger and echo timing.
- Adjusting the distance threshold for accurate obstacle detection.
- Debugging incorrect wiring connections during simulation.
- Testing the movement sequence multiple times until the expected behavior was achieved.

---

# 📚 Learning Outcomes

Through this project I learned how to:

- Interface Arduino with DC motors.
- Use the L293D Motor Driver.
- Control motor direction and movement.
- Read distance using the HC-SR04 sensor.
- Control Servo Motors using Arduino.
- Integrate multiple electronic components into one project.
- Build and test electronic circuits using Tinkercad.
- Improve troubleshooting and debugging skills.

---

# 📄 License

This repository was created for educational purposes as part of an Arduino laboratory assignment.
