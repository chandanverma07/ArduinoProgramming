char data = 0;               
void setup() 
{
  Serial.begin(9600);         
  pinMode(13, OUTPUT);        
}
void loop()
{
  if(Serial.available() > 0)
  {
    data = Serial.read(); 
    Serial.print(data);        
    Serial.print("\n");        
 if(data == 'w')  
{    
      digitalWrite(13, HIGH); 
      Serial.print("yes"); 
      
}
    else 
 {   
      digitalWrite(13, LOW); 
    Serial.print("no");  
  }                            
 
}         
}

