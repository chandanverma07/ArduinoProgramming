 int led = 9;          
int brightness = 0;    
int value = 5;  
void setup() {
  pinMode(led, OUTPUT);
}
void loop() {
  analogWrite(led, brightness);
  brightness = brightness + value;
 
  if (brightness == 0 || brightness == 255) {
    value=-value ;
  }
  delay(30);
}


