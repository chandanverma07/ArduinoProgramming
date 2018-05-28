int timer = 1000;        
void setup() {
  for (int thisPin = 2; thisPin < 8; thisPin++)  
 {
 pinMode(thisPin, OUTPUT);      
  }
  }

void loop() {
  for (int thisPin = 2; thisPin < 8; thisPin++) { 
    digitalWrite(thisPin, HIGH);   
    delay(timer);                  
   digitalWrite(thisPin, LOW);   
   delay(timer); 
  }
  }

