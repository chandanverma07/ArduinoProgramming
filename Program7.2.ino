
int relay = 7;
void setup()
{
  pinMode(relay, OUTPUT);   
  digitalWrite(relay, LOW);  
  attachInterrupt(0, lightON, RISING); 
}

void loop()
{   

}

void lightON()
{ 
  digitalWrite(relay, HIGH); 
  for(int i = 0; i <= 3000; i++){ //50 Seconds Aprox. time 
    delay(1000);
  }
  digitalWrite(relay, LOW); 
 }
