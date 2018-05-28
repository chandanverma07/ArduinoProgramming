int sw=8;
int led=13;
boolean lastb=LOW;
boolean ledon=false;
boolean currentb=LOW;
void setup()
{
 pinMode(sw,INPUT);
  pinMode(led,OUTPUT);
}
boolean debounce(boolean last)
{
  boolean current=digitalRead(sw);
  if(last !=current)
  {
delay(5);
 current=digitalRead(sw);
  }
  return current;
  }


void loop()
{
  currentb=debounce(lastb);
  if(lastb  ==LOW && currentb == HIGH)
  {
  ledon=!ledon;
}
else
{
  lastb=currentb;
}

digitalWrite(led, ledon);
}

