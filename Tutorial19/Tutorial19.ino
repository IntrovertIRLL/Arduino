String msg="Which LED would you like on? ";
int redPin=7;
int yPin=13;
int bPin=12;
String led;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(redPin, OUTPUT);
  pinMode(yPin,OUTPUT);
  pinMode(bPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg);
  while (Serial.available()==0){

  }

led=Serial.readString();
if (led=="red" || led=="Red"){
  digitalWrite(redPin,HIGH);
  digitalWrite(yPin,LOW);
  digitalWrite(bPin,LOW);

}
if (led=="yellow"||led=="Yellow"){
  digitalWrite(redPin,LOW);
  digitalWrite(yPin,HIGH);
  digitalWrite(bPin,LOW);
}
if (led=="blue" ||led=="Blue"){
  digitalWrite(redPin,LOW);
  digitalWrite(yPin,LOW);
  digitalWrite(bPin,HIGH);
}
}
