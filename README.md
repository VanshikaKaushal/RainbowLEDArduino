# Rainbow LED Light with Arduino 🌈

This project uses an Arduino and the **Adafruit NeoPixel** library to display a rainbow light effect on an LED strip. LEDs light up one by one in sequence and then turn off in reverse, cycling through multiple colors.  

---

## Features

- Sequential LED lighting effect (forward and backward)  
- Cycles through multiple colors: Red, Green, Blue, Orange, Purple  
- Easy to modify and extend for more LEDs or colors  

---

## Hardware Required

- Arduino board (e.g., Uno, Nano)  
- Adafruit NeoPixel LED strip (8 LEDs in this example)  
- 220–470Ω resistor (recommended for NeoPixel data line)  
- 5V power supply for the LED strip  
- Jumper wires  

---

## Wiring

1. Connect the **DIN** of the NeoPixel strip to **pin 14** of Arduino (or change in code).  
2. Connect **GND** of the strip to Arduino GND.  
3. Connect **5V** of the strip to Arduino 5V (or external 5V if needed).  

---

