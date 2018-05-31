const byte ledPin = 13;
const byte interruptPin = 2;
volatile byte state = LOW;
void setup() 
{
pinMode(ledPin, OUTPUT);
attachInterrupt(digitalPinToInterrupt(interruptPin), blink1, RISING);
}
void loop() 
{
digitalWrite(ledPin, state);
}
void blink1() {
state =!state;
} 

