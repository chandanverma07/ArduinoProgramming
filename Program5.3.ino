int IR = 2;
void setup() {
 Serial.begin(9600);
  pinMode(IR, INPUT);
 }
void loop() {
 int IRstate = digitalRead(IR);
  Serial.println(IRstate);
  if(IRstate==1)
  {
    Serial.println("SENSOR IS ON");
    delay(500);
  }
  else
  {
    Serial.println("SENSOR IS OFF");
    delay(500);
  }
     delay(100); }

