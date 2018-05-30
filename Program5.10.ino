#define trigPin 9
#define echoPin 11
#define Buzzer 13
float distance;
float duration;

void setup() {
Serial.begin (9600);
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
pinMode(Buzzer, OUTPUT);

}

void loop() {

digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);

duration = pulseIn(echoPin, HIGH);

distance = (duration/2) / 29.1;

if (distance < 30)
{
digitalWrite(Buzzer,HIGH); 
}
else {
digitalWrite(Buzzer,LOW);
}

if (distance >= 200 || distance <= 0)
{
Serial.println("Out of range");
}
else {
Serial.print(distance);
Serial.println(" cm");
}
delay(500);
}
