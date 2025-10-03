const int ledPin = 26;


void setup() {
  // initialize digital pin ledPin as an output.
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // read the analog value
  int analogValue = analogRead(35);
  
  // print out the values you read:
  //Serial.printf("ADC analog value = %d\n",analogValue);

  if (analogValue > 1000){
    digitalWrite(ledPin, HIGH); 
  }else {
    digitalWrite(ledPin, LOW);
  }
  
  delay(100);  // delay in between reads for clear read from serial
}
