

#define BAUDRATE 9600
#define TIMEOUT_OVERFLOW 1000
#define DIST 20
const int TrigPin = 13;
const int EchoPin = 10;
const int MotR_A = 3; // DC Motor1 Pole_A
const int MotR_B = 5; // DC Motor1 Pole_B
const int MotL_A = 6; // DC Motor2 Pole_A
const int MotL_B = 9; // DC Motor2 Pole_B
unsigned long USS_Value;
unsigned int Flag=0,i=0,USS_Val1=0,USS_Val2=0,USS_Val3=0,USS_Val4=0,
    USS_Val5=0,USS_Val6 =0,USS_Val7=0,USS_Val8=0,USS_Val9=0,USS_Val10=0;
void setup()
{
Serial.begin(BAUDRATE);
pinMode(TrigPin, OUTPUT); 
pinMode(EchoPin, INPUT);
pinMode(MotR_A, OUTPUT);
pinMode(MotR_B, OUTPUT);
pinMode(MotL_A, OUTPUT);
pinMode(MotL_B, OUTPUT);
}
byte ReadOneByte()
{
int ByteRead;
while(!Serial.available());
ByteRead = Serial.read();
return ByteRead;
}
void loop()
{
USS_Value = US_Sensor(); // Read Ultrasonic Sensor value
USS_Val10 = USS_Val9;
USS_Val9 = USS_Val8;
USS_Val8 = USS_Val7;
USS_Val7 = USS_Val6;
USS_Val6 = USS_Val5; // Get Previous 6 values
USS_Val5 = USS_Val4;
USS_Val4 = USS_Val3;
USS_Val3 = USS_Val2;
USS_Val2 = USS_Val1;
USS_Val1 = USS_Value;
if (Flag==0)
{
if (USS_Val1 < DIST && USS_Val2 < DIST && USS_Val3 < DIST && USS_Val4 < 
            DIST && USS_Val5 < DIST &&USS_Val6 < DIST && USS_Val7 < 
            DIST && USS_Val8 < DIST &&USS_Val9 < DIST &&USS_Val10 < DIST )
{
Robot_Right();
Serial.print("Robo Turn!");
Serial.println();
Flag=1;
}
else
{
Robot_Forword();
Serial.print("Robo Forword!");
Serial.println();
Flag=0;
}
}
else if (Flag==1)
{
Robot_Right();
Serial.print("Robo Turn!");
Serial.println();
i++;
if (i==100) // Turn range
{
Flag=0;
i=0;
}
}
}
void Robot_Forword()
{
digitalWrite(MotR_A, LOW);
digitalWrite(MotR_B, HIGH);
digitalWrite(MotL_B, LOW);
digitalWrite(MotL_A, HIGH);
}
void Robot_Reverse()
{
digitalWrite(MotR_A, HIGH);
digitalWrite(MotR_B, LOW);
digitalWrite(MotL_B, HIGH);
digitalWrite(MotL_A, LOW);
}
void Robot_Right()
{
digitalWrite(MotR_A, HIGH);
digitalWrite(MotR_B, LOW);
digitalWrite(MotL_B, LOW);
digitalWrite(MotL_A, HIGH);
}
void Robot_Left()
{
digitalWrite(MotR_A, LOW);
digitalWrite(MotR_B, HIGH);
digitalWrite(MotL_B, HIGH);
digitalWrite(MotL_A, LOW);
}
void Robot_Stop()
{
digitalWrite(MotR_A, LOW);
digitalWrite(MotR_B, LOW);
digitalWrite(MotL_B, LOW);
digitalWrite(MotL_A, LOW);
}
unsigned int US_Sensor()
{
unsigned long ultrasoundDuration;
unsigned char pin = 0;
unsigned int time_flag = 0;
digitalWrite(TrigPin, HIGH);
delayMicroseconds(2);
digitalWrite(TrigPin, LOW);
delayMicroseconds(10);
digitalWrite(TrigPin, HIGH);
TCCR1A = 0x00;
TCNT1 = 0x0000;
TCCR1B = 0x01;
pin = digitalRead(EchoPin);
while(pin)
{
pin = digitalRead(EchoPin);
time_flag++;
if(time_flag > TIMEOUT_OVERFLOW)
break;
}
TCCR1B = 0x00;
ultrasoundDuration = TCNT1;
ultrasoundDuration = ultrasoundDuration / 16;
ultrasoundDuration = ultrasoundDuration * 0.017;
return (ultrasoundDuration);
}
