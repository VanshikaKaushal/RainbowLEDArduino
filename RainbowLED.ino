/*
* This code is for displaying rainbow light in my LED. 
*/
#include <Adafruit_NeoPixel.h> // Include the Adafruit NeoPixel library

#define LED_PIN 14 // NeoPixel LED strip
#define NUM_LEDS 8 // Number of LEDs

// Create an instance of the Adafruit_NeoPixel class
Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUM_LEDS, LED_PIN, NEO_GRB + NEO_KHZ800); 

uint32_t colors[] = {
  strip.Color(255, 0, 0),   // Red
  strip.Color(0, 255, 0),   // Green
  strip.Color(0, 0, 255),   // Blue
  strip.Color(255, 100, 0), // Orange
  strip.Color(150, 0, 150)  // Purple
};

int colorIndex = 0;

void setup() {
  strip.begin(); // Initialize the NeoPixel strip
  strip.show(); // Set initial color to black
}

void loop() {
  uint32_t currentColor = colors[colorIndex];

  // Turn on LEDs one by one (forward)
  for (int i = 0; i < NUM_LEDS; i++) {
    strip.setPixelColor(i, currentColor); 
    strip.show(); 
    delay(100); 
  }
  
  // Turn off LEDs one by one (backward)
  for (int i = NUM_LEDS - 1; i >= 0; i--) {
    strip.setPixelColor(i, 0, 0, 0); 
    strip.show(); 
    delay(100); 
  }

  // Move to next color
  colorIndex = (colorIndex + 1) % 5;  

}