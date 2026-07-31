int redPin=8;
int greenPin=9;
int bluePin=10;
String myColour;
String msg="What colour do you want?";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(redPin,OUTPUT);
  pinMode(greenPin,OUTPUT);
  pinMode(bluePin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg);
  while ( Serial.available()==0){

  }
 myColour=Serial.readString();
 
  if (myColour=="red"){
    digitalWrite(redPin,LOW);
    digitalWrite(greenPin,HIGH);
    digitalWrite(bluePin,HIGH);
     
  }
 if (myColour=="green"){
    digitalWrite(redPin,HIGH);
    digitalWrite(greenPin,LOW);
    digitalWrite(bluePin,HIGH);
     
}
 if (myColour=="blue"){
    digitalWrite(redPin,HIGH );
    digitalWrite(greenPin,HIGH);
    digitalWrite(bluePin,LOW);
 }
     

 if (myColour=="off"){
    digitalWrite(redPin,HIGH );
    digitalWrite(greenPin,HIGH);
    digitalWrite(bluePin,HIGH);
 }
 if (myColour=="yellow"){
    analogWrite(redPin,0);
    analogWrite(greenPin,128);
    analogWrite(bluePin,255);
 }
 if (myColour=="aqua"){
    analogWrite(redPin,255);
    analogWrite(greenPin,0);
    analogWrite(bluePin,170);
 }
 if (myColour=="cyan"){
    analogWrite(redPin,255);
    analogWrite(greenPin,0);
    analogWrite(bluePin,0);
 }
 if (myColour=="magenta"){
    analogWrite(redPin,0);
    analogWrite(greenPin,255);
    analogWrite(bluePin,0);
 }
 }
