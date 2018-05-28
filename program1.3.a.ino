int inpin=7;
int outpin=13;
int value=0;
void setup()
{
  pinMode(inpin,INPUT);
  pinMode(outpin,OUTPUT);
}
void loop()
{
  value=digitalRead(inpin);
  if(value==HIGH)
  {
    digitalWrite(outpin,HIGH);
  }
  else
  {
    digitalWrite(outpin,LOW);
  }
} 

