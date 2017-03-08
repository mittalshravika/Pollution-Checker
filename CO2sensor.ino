// Digital pin 8 will be called 'pin8'
int ledP1 = 11;
// Analog pin 0 will be called 'sensor'
int ledP2 = 10;
// Set the initial sensorValue to 0
int ledP3 = 9;
int sensor=8;
int sensorValue=0;

// The setup routine runs once when you press reset
void setup() {
  // Initialize the digital pin 8 as an output
  // Initialize serial communication at 9600 bits per second
  Serial.begin(9600);
  pinMode(sensor,OUTPUT);
  pinMode(ledP1,OUTPUT);
  pinMode(ledP2,OUTPUT);
  pinMode(ledP3,OUTPUT);
}
void setcolor(int red,int green,int blue)
{
  analogWrite(ledP1,red);
  analogWrite(ledP2,green);
  analogWrite(ledP3,blue);
}
// The loop routine runs over and over again forever
void loop() {
  // Read the input on analog pin 0 (named 'sensor')
  sensorValue = analogRead(sensor);
  // Print out the value you read
  Serial.println(sensorValue);
  if (sensorValue<=x
  if (sensorValue>x)&&(sensorValue<y)
  {
    setcolor(255,255,0)
  }
  delay(1000);
  // If sensorValue is greater than 500
//  if (sensorValue > 500) {
    // Activate digital output pin 8 - the LED will light up
  //  setcolor(255,0,0);
  }

