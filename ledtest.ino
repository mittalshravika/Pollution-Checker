int led1=7;
int led2=6;
int led3=5;
void setup() {
  // put your setup code here, to run once:
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
}
void setcolor(int red,int green,int blue)
{
  analogWrite(led1,red);
  analogWrite(led2,green);
  analogWrite(led3,blue);
}

void loop() {
  // put your main code here, to run repeatedly:
setcolor(255,255,0);
}
