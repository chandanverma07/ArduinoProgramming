int a;
void setup()
{
  Serial.begin(9600);
  pinMode(13,OUTPUT);
}
void loop()
{
  if (Serial.available())
  {
    a=Serial.read();
   a=a-48;
    Serial.print(a);
    if(a==1)
    {
     Serial.println("yes"); 
     digitalWrite(13,HIGH);
    }
else
{
  Serial.println("no");
  digitalWrite(13,LOW);
}}}

