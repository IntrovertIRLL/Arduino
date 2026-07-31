int myVoltPin=A2;
int readVal;
float V2;
int delayT=500;
int redPin=13;
int yellowPin=12;
int bluePin=8;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(myVoltPin,INPUT);
  pinMode(redPin,OUTPUT);
  pinMode(yellowPin,OUTPUT);
  pinMode(bluePin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  readVal=analogRead(myVoltPin);
  V2=(5./1023.)*readVal;
  Serial.println(V2);
  if(V2>=4.0){
    digitalWrite(redPin,HIGH);
    digitalWrite(yellowPin,LOW);
    digitalWrite(bluePin,LOW);
  }
  if (V2>=3.0 && V2<4.0)  {
    digitalWrite(redPin,LOW);
    digitalWrite(yellowPin, HIGH);
    digitalWrite(bluePin,LOW);
  }
  if (V2>0.0 && V2<3.0){
    digitalWrite(redPin,LOW);
    digitalWrite(yellowPin, LOW);
    digitalWrite(bluePin,HIGH);
  }
  if(V2<=0.0){
    digitalWrite(redPin,LOW);
    digitalWrite(yellowPin, LOW);
    digitalWrite(bluePin,LOW);
  }
  delay(delayT);
}