const int lm_pin = A1;  /* LM35 O/P pin */

void setup() {
  Serial.begin(9600);
}

void loop() {
  int read_temp_val;
  float temp_val;
  read_temp_val = analogRead(A1);
  temp_val = (read_temp_val * 4.88);
  temp_val = (temp_val/10);
  Serial.print("Temperature = ");
  Serial.print(temp_val);
  Serial.print(" Degree Celsius\n");
  delay(1000);
}
