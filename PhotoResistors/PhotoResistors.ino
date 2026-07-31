int lightPin=A0;
int lightVal;
int dv=50;
int redPin=13;
int greenPin=8;



void setup() {
  // put your setup code here, to run once:
  pinMode(lightPin,INPUT);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  lightVal=analogRead(lightPin);
  Serial.println(lightVal);
  delay(dv);

if (lightVal<250){
  //Lights are off
   digitalWrite(redPin, HIGH);
  digitalWrite(greenPin,LOW);
}

if(lightVal>250) {
  //Lights are on
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin,HIGH);
}
}
