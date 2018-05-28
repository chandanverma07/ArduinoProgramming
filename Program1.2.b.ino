int i ;
int pin[]={2,3,4,5,6,7};
void setup()
{
for(i=0;i<8;i++)
  {
pinMode(pin[i],OUTPUT);
  }
}
void loop()
{ 
  for(i=0;i<8;i++)
  {
digitalWrite(pin[i],HIGH);
delay(500);
digitalWrite(pin[i],LOW);
 delay(500);
  }
}

