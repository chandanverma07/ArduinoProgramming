byte val;

void setup()
{
  Serial.begin(9600);
	
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop()
{
	int a=0;
	if(Serial.available())
	{
		val=Serial.read();
		Serial.println(int(val));
		
		if(int(val)==97)
			digitalWrite(2,HIGH);
		
		else if (int(val)==98)
			digitalWrite(2,LOW);
		
		if(int(val)==99)
			digitalWrite(3,HIGH);
		
		else if(int(val)==100)
			digitalWrite(3,LOW);
		
		if(int(val)==101)
			digitalWrite(4,HIGH);
		
		else if(int(val)==102)
			digitalWrite(4,LOW);
		
		if(int(val)==103)
			digitalWrite(5,HIGH);
		
		else if(int(val)==104)
			digitalWrite(5,LOW);
		
		if(int(val)==105)
			digitalWrite(6,HIGH);
		
		else if(int(val)==106)
			digitalWrite(6,LOW);
		
		if(int(val)==107)
			digitalWrite(7,HIGH);
		
		else if(int(val)==108)
			digitalWrite(7,LOW);
	}
}
