#define ECHOpin 5// defines the echo pin of the sensor to pin 5 of arduino
#define TRIGpin 6
long duration;
int distance;
void setup()
{
  
  pinMode(TRIGpin,OUTPUT);
  pinMode(ECHOpin,INPUT);
  Serial.begin(9600);
  Serial.println("test of the ultra sonic sensor HC-SR04");
  Serial.println("with the Arduino Uno board");

}
void loop()
{
  digitalWrite(TRIGpin,LOW);
  delayMicroseconds(4);

  digitalWrite(TRIGpin,HIGH);
  delayMicroseconds(15);
  digitalWrite(TRIGpin,LOW);

  duration=pulseIn(ECHOpin,HIGH);
  distance=duration*(0.034/2);
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" mm");
  delay(5000);
}