// Welcome to Aviyan's Thoughts

int digitalPin = 3;   // KY-037 digital interface
int analogPin = A0;   // KY-037 analog interface
int digitalVal;       // digital readings
int analogVal;        // analog readings
void setup()
{
  pinMode(digitalPin,INPUT);
  pinMode(analogPin, INPUT);
  Serial.begin(9600);
}
void loop()
{
  // Read the digital inteface
  digitalVal = digitalRead(digitalPin);
  if(digitalVal == HIGH)
  {
    Serial.println("Sound Detected");
  }
  else
  {
    Serial.println("Sound Not Detected");
  }
  // Read analog interface
  analogVal = analogRead(analogPin);
  // Print analog value to serial
  Serial.println(analogVal);
  delay (1000);
}