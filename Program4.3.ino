#define m11 3
#define m12 4
#define m21 5
#define m22 6
#define D0 8
#define D1 9
#define D2 10
#define D3 11
void forward()
{
   digitalWrite(m11, HIGH);
   digitalWrite(m12, LOW);
   digitalWrite(m21, HIGH);
   digitalWrite(m22, LOW);
}
void backward()
{
   digitalWrite(m11, LOW);
   digitalWrite(m12, HIGH);
   digitalWrite(m21, LOW);
   digitalWrite(m22, HIGH); 
}
void left()
{
   digitalWrite(m11, HIGH);
   digitalWrite(m12, LOW);
   digitalWrite(m21, LOW);
   digitalWrite(m22, LOW);
}
void right()
{
   digitalWrite(m11, LOW);
   digitalWrite(m12, LOW);
   digitalWrite(m21, HIGH);
   digitalWrite(m22, LOW);
}
void Stop()
{
   digitalWrite(m11, LOW);
   digitalWrite(m12, LOW);
   digitalWrite(m21, LOW);
   digitalWrite(m22, LOW);
}
void setup() 
{
  pinMode(D0, INPUT);
  pinMode(D1, INPUT);
  pinMode(D2, INPUT);
  pinMode(D3, INPUT);
  pinMode(m11, OUTPUT);
  pinMode(m12, OUTPUT);
  pinMode(m21, OUTPUT);
  pinMode(m22, OUTPUT);
}
void loop() 
{
  int temp1=digitalRead(D0);
  int temp2=digitalRead(D1);
  int temp3=digitalRead(D2);
  int temp4=digitalRead(D3);
 
  if(temp1==0 && temp2==1 && temp3==0 && temp4==0)
  forward();
  else if(temp1==0 && temp2==0 && temp3==1 && temp4==0)
  left();
  else if(temp1==0 && temp2==1 && temp3==1 && temp4==0)
  right();
  else if(temp1==0 && temp2==0 && temp3==0 && temp4==1)
  backward();
   else if(temp1==1 && temp2==0 && temp3==1 && temp4==0)
  Stop();
}
