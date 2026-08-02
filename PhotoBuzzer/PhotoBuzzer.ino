int lightPin=A0;
int lightVal;
float delayT;
int buzzPin = 8;
int potPin = A2;


void setup() {
  // put your setup code here, to run once:
  pinMode(lightPin,INPUT);
  pinMode(buzzPin, OUTPUT);
  pinMode(potPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  lightVal=analogRead(lightPin);
  Serial.println(lightVal);
  delayT = (-9.0/770.0)*lightVal + 10.234;
  

if (lightVal<250){
  //Lights are off
  digitalWrite(buzzPin, HIGH);
  delayMicroseconds(delayT);
  digitalWrite(buzzPin, LOW);
  delayMicroseconds(delayT);

}

if(lightVal>250) {
  //Lights are on
  digitalWrite(buzzPin, HIGH);
  delayMicroseconds(delayT);
  digitalWrite(buzzPin, LOW);
  delayMicroseconds(delayT);

}
}
