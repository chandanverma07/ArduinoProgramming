


const int Sensor=2;

void setup() {                

  pinMode(13, OUTPUT);     
 
  pinMode(Sensor,INPUT);
}

void loop() {
  if(digitalRead(Sensor)==HIGH)     
  {
    digitalWrite(13, HIGH);   
  }
  else
  {
    digitalWrite(13, LOW);   
  }
  delay(100);             
}
