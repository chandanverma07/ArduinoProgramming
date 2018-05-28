int sw=8;
int led=13;
boolean lastb=LOW;
boolean ledon=false;
void setup()
{
  pinMode(sw,INPUT);
  pinMode(led,OUTPUT);
}
void loop()
{
  if(digitalRead(sw) ==HIGH && lastb == LOW)
  {
  ledon=!ledon;
  lastb=HIGH;
}
else
{
  lastb=digitalRead( sw);
}
digitalWrite(led, ledon);
}

