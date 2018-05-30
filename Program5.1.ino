byte a;

void setup()
{
  Serial.begin(9600);
}
void loop()
{
  if (Serial.available())
  {
    a=Serial.read();
    Serial.write(a);
  }
  
}

