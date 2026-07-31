int redLED= 13;
int greenLED= 12;
int blueLED= 8;

int fast= 100;
int slower= 250;
int slowest= 500;


void setup() {
  // put your setup code here, to run once:
pinMode(redLED, OUTPUT);
pinMode(greenLED, OUTPUT);
pinMode(blueLED, OUTPUT);
}

void loop() {
  for (int i = 0; i < 5; i++)
{digitalWrite(redLED, HIGH);
delay(fast);
digitalWrite(redLED, LOW);
delay(fast);
}

for (int i = 0; i < 10; i++)
{digitalWrite(greenLED, HIGH);
delay(slower);
digitalWrite(greenLED, LOW);
delay(slower);
}

for (int i = 0; i < 15; i++)
{digitalWrite(blueLED, HIGH);
delay(slowest);
digitalWrite(blueLED, LOW);
delay(slowest);
}

while(true) {
}
}