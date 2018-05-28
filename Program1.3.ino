int redPin= 9;
int greenPin = 10;
int bluePin = 11;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  digitalWrite(redPin,HIGH)
  digitalWrite(greenPin,LOW)
  digitalWrite(bluePin,LOW)
  delay(100)
  digitalWrite(redPin,LOW)
  digitalWrite(greenPin,HIGH)
  digitalWrite(bluePin,LOW)
  delay(1000)
  digitalWrite(redPin,LOW)
  digitalWrite(greenPin,LOW)
  digitalWrite(bluePin,HIGH)
  delay(1000)
  

}


