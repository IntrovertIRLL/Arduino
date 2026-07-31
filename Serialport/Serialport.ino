int r= 5;
float pi=3.142;
float area;
int waitT= 1000;
String myString="Area of a circle with radius ";
String myString1=" is ";
//Always declare the variabke type first

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  //baud rate should be the same as the rate on the serial monitor
}

void loop() {
  // put your main code here, to run repeatedly:
area=pi*r*r;
  Serial.print(myString);
  Serial.print(r);
  Serial.print(myString1);
  Serial.println(area);
  delay(waitT);
}
