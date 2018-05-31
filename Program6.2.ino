const int buttonPin = 2;   
const int ledPin =  13;    
volatile int buttonState = 0;        
void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  attachInterrupt(0, pin_ISR, CHANGE);
}
void loop()
{
}

void pin_ISR() {
  buttonState = digitalRead(buttonPin);
  digitalWrite(ledPin, buttonState);
}

