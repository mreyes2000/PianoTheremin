int speakerPin = 12;
int photocellPin = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int reading = analogRead(photocellPin);
  int pitch = 3.5 * reading - 2000;
  tone(speakerPin, pitch);
  Serial.println(reading);
  Serial.flush();
}
