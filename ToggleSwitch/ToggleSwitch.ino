int LEDState=0;   // 0 means light is OFF, 1 means light is ON
int LEDPin=8;     // Light plug is in Pin 8
int buttonPin=12; // Button plug is in Pin 12
int buttonNew;    // What is the button doing RIGHT NOW?
int buttonOld=1;  // What was the button doing a SPLIT-SECOND AGO? (Starts at 1 = unpressed)
int dt=100;       // Nap time (100 milliseconds)

void setup() {
  // Wake up the chat window with the computer
  Serial.begin(9600);
  
  // Pin 8 is sending power OUT to the LED
  pinMode(LEDPin, OUTPUT);
  
  // Pin 12 is listening IN for the button
  pinMode(buttonPin, INPUT);
}

void loop() {
  // Read the current state of the button (1 = unpressed, 0 = pressed)
  buttonNew = digitalRead(buttonPin);

  // Check if the button was JUST released (was pressed down, but is now up)
  if (buttonOld == 0 && buttonNew == 1) {
    
    // If the light is currently OFF, turn it ON and remember it's ON
    if (LEDState == 0) {
      digitalWrite(LEDPin, HIGH);
      LEDState = 1;
    }
    // Otherwise (light is ON), turn it OFF and remember it's OFF
    else {
      digitalWrite(LEDPin, LOW);
      LEDState = 0;
    }
  }

  // Update buttonOld so it holds this cycle's value for the next loop
  buttonOld = buttonNew;

  // Short delay (debouncing) so the circuit stays stable
  delay(dt);
}