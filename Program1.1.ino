void setup()
{
//Pin 13 Behave as Output
pinMode(13, OUTPUT);
}
void loop()
{
//Transmits “1” From PIN13
digitalWrite(13, HIGH);
//wait for 100ms                                               
delay(1000);
//Transmits  “0” From PIN13
digitalWrite(13, LOW);
delay(1000);
//wait for 100ms

}

