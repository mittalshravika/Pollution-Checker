int l1=8;
int l2=7;
int l3=6;
void setup() {
  // put your setup code here, to run once:
pinMode(l1,OUTPUT);
pinMode(l2,OUTPUT);
pinMode(l3,OUTPUT);
Serial.begin(9600);
}
void setcolor(int red, int green, int blue)
{
  analogWrite(l1,red);
  analogWrite(l2,green);
  analogWrite(l3,blue);
}
void loop() {
  // put your main code here, to run repeatedly:
  setcolor(255,0,0);
  delay(1000);
  setcolor(0,255,0);
  delay(1000);
  setcolor(0,0,255);
  delay(1000);
}
