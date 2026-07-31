int potPin=A2;
int bPin=6;
int potVal;//Holds the raw reading from the potentiometer returning a value from 0-1023
float LEDVal;//Holds the brightness value, scaled to fit the 0-255 range that analogWrite expects

 void setup() {
  // put your setup code here, to run once:
  pinMode(A2, INPUT);
  pinMode(6,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  potVal=analogRead(potPin);
  LEDVal=(255./1023.)*potVal;
  analogWrite(bPin,LEDVal);
  Serial.println(LEDVal);// Allows me to read the actual values on the serial monitor and see the numbers change with the brightness
}
