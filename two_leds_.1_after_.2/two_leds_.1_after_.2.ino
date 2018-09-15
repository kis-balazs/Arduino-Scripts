//pins 11 and 12
//one after other, continuously
void setup()
{
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}
void loop()
{
  digitalWrite(12, HIGH);
  delay(500);
  digitalWrite(11,HIGH);
  delay(100);
  digitalWrite(12, LOW);
  delay(500);
  digitalWrite(11,LOW);
  delay(100);
}

