int redPin= 7;
int greenPin = 6;
int bluePin = 5;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  writingColor(255, 0, 0); // Red Color
  delay(1000);
  writingColor(0, 255, 0); // Green Color
  delay(1000);
  writingColor(0, 0, 255); // Blue Color
  delay(1000);
  writingColor(255, 255, 255); // White Color
  delay(1000);
 writingColor(170, 0, 255); // Purple Color
  delay(1000);
}

void writingColor(int redValue, int greenValue, int blueValue) {
  analogWrite(redPin, redValue);
  analogWrite(greenPin, greenValue);
  analogWrite(bluePin, blueValue);
}
