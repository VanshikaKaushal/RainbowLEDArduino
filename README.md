# Arduino Project Repository 🔬⚡

This repository contains my Arduino mini projects. Each project explores different concepts in embedded systems, electronics, and programming with Arduino.  

---

## 📂 Mini Projects Overview
1. [Rainbow LED Light]  
2. [Smart Light]]  


---

## Project 1: Rainbow LED Light (Arduino) 🌈

This project uses an Arduino and the **Adafruit NeoPixel** library to display a rainbow light effect on an LED strip. LEDs light up one by one in sequence and then turn off in reverse, cycling through multiple colors.  

### ✨ Features
- Sequential LED lighting effect (forward and backward)  
- Cycles through multiple colors: Red, Green, Blue, Orange, Purple  
- Easy to modify and extend for more LEDs or colors  

### 🛠️ Hardware Required
- Arduino board (e.g., Uno, Nano)  
- Adafruit NeoPixel LED strip (8 LEDs in this example)  
- 220–470Ω resistor (recommended for NeoPixel data line)  
- 5V power supply for the LED strip  
- Jumper wires  

### ⚡ Wiring
1. Connect the **DIN** of the NeoPixel strip to **pin 14** of Arduino (or change in code).  
2. Connect **GND** of the strip to Arduino GND.  
3. Connect **5V** of the strip to Arduino 5V (or external 5V if needed).  

---

## Project  2: Smart Light (Arduino) 💡

The Smart Light project demonstrates how an Arduino can automatically control lighting based on environmental conditions (e.g., using a light sensor).  

### ✨ Features
- Turns LEDs on/off depending on light intensity  
- Simulates an **automatic night lamp**  
- Can be adapted for home automation projects  

### 🛠️ Hardware Required
- Arduino board (e.g., Uno, Nano)  
- LDR (Light Dependent Resistor)  
- 10kΩ resistor (for LDR voltage divider)  
- LED + 220Ω resistor  
- Jumper wires and breadboard  

### ⚡ Wiring
1. Connect the **LDR** in a voltage divider circuit with a 10kΩ resistor, and feed output to **A0** pin of Arduino.  
2. Connect an **LED** to pin 9 (through 220Ω resistor).  
3. Arduino reads light intensity and controls LED automatically.  

---

## 🚀 How to Run
1. Open the `.ino` file of the lab you want to run in Arduino IDE.  
2. Select the correct board and port from **Tools > Board/Port**.  
3. Upload and watch it work!  

---

## 📌 Future mini projects to be added
- More projects will be added as I progress in my Arduino journey 🚀  
- Stay tuned for topics like **servo motors, sensors, IoT, and more!**  
