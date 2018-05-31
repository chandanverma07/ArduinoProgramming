int buzzer = 13;
void setup()
{
  pinMode(buzzer, OUTPUT);   
  digitalWrite(buzzer, LOW); 
  attachInterrupt(0, alarmON, RISING); 
}

void loop()
{   

}

void alarmON()
{  
  digitalWrite(buzzer, HIGH); 
}
