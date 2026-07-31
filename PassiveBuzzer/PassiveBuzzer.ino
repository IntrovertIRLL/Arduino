int buzzPin = 8;
int potPin = A2;
int potVal;
float toneVal;

void setup() {
  pinMode(buzzPin, OUTPUT);
  pinMode(potPin, INPUT);
}

void loop() {
  // Read potentiometer (0 to 1023)
  potVal = analogRead(potPin);

  // Linear equation mapping 0 -> 60us and 1023 -> 10000us
  toneVal = (9940.0 / 1023.0) * potVal + 60.0;

  // Alternatively, you can use Arduino's built-in map function:
  // toneVal = map(potVal, 0, 1023, 60, 10000);

  // Toggle the passive buzzer high and low to produce the tone
  digitalWrite(buzzPin, HIGH);
  delayMicroseconds(toneVal);
  digitalWrite(buzzPin, LOW);
  delayMicroseconds(toneVal);
}