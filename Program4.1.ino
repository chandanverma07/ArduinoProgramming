int IN1 = 4;
int IN2 = 5;
int IN3 = 6;
int IN4 = 7;
 
void setup()
{
 
 pinMode(IN1, OUTPUT);
 pinMode(IN2, OUTPUT);
 pinMode(IN3, OUTPUT);
 pinMode(IN4, OUTPUT);
}
 
void loop()
{

 digitalWrite(IN1, HIGH);
 digitalWrite(IN2, LOW);
 delay(2000);

 digitalWrite(IN1, HIGH);
 digitalWrite(IN2, HIGH);
 delay(500);

 digitalWrite(IN3, HIGH);
 digitalWrite(IN4, LOW);
 delay(2000);

 digitalWrite(IN3, HIGH);
 digitalWrite(IN4, HIGH);
 delay(500);


 digitalWrite(IN1, LOW);
 digitalWrite(IN2, HIGH);
 delay(2000);

 digitalWrite(IN1, HIGH);
 digitalWrite(IN2, HIGH);
 delay(500);

 digitalWrite(IN3, LOW);
 digitalWrite(IN4, HIGH);
 delay(2000);
 
 digitalWrite(IN3, HIGH);
 digitalWrite(IN4, HIGH);
 delay(500);
}
