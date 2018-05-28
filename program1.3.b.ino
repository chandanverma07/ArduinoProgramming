const int button = 2;   
const int led =  13;
int State = 0;

void setup() {
  pinMode(led, OUTPUT);      
  pinMode(button, INPUT);     
}

void loop()
{
  State = digitalRead(button);
  if (State == HIGH) {       
    digitalWrite(led, HIGH);  
  } 
  else {
    digitalWrite(led , LOW); 
  }
}

