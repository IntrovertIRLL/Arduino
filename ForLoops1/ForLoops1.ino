int redPin=9;
int yPin=6;
int dTime=250;
int longWait=500;
int yBlink=3;
int redBlink=5;
int j;

void setup() {
  // put your setup code here, to run once:
  pinMode(redPin, OUTPUT);
  pinMode(yPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(j=1;j<=redBlink;j=j+1){
    digitalWrite(redPin,HIGH);
  delay(dTime);
  digitalWrite(redPin,LOW);
  delay(longWait);
  }
  
  for(j=1;j<=yBlink;j=j+1){
    digitalWrite(yPin,HIGH); 
   delay(dTime);
   digitalWrite(yPin,LOW);
   delay(longWait);
  }
   
   //fun with for loops
  int j;
int delayTime=500;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(j=10;j>=1;j=j-1){
    Serial.println(j);
    delay(delayTime);
  }
  Serial.println();
}




}
