void setup() {
  // put your setup code here, to run once:
pinMode(13, OUTPUT);
pinMode(12, OUTPUT);
pinMode(8, OUTPUT);
}

void loop() {
  for (int i = 0; i < 5; i++)
{digitalWrite(13, HIGH);
delay(500);
digitalWrite(13, LOW);
delay(500);
}

for (int i = 0; i < 10; i++)
{digitalWrite(12, HIGH);
delay(500);
digitalWrite(12, LOW);
delay(500);
}

for (int i = 0; i < 15; i++)
{digitalWrite(8, HIGH);
delay(500);
digitalWrite(8, LOW);
delay(500);
}

while(true) {
}
}

