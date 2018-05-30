int value = 10;  

void setup() {
  Serial.begin(9600);
  Serial.println(value);       
  Serial.println(value, DEC);  
  Serial.println(value, HEX);  
  Serial.println(value, OCT);  
  Serial.println(value, BIN);  
}
void loop() {  

}
