int pirPin = 2; //digital 2
int counter = 0;
int state;
int laststate = HIGH;

void setup(){
Serial.begin(9600);
pinMode(pirPin, INPUT);
}

void loop(){
    int state = digitalRead(pirPin);
       if ( state != laststate) {
                   
       //was motion detected
       counter=counter+1;
       Serial.println(counter);
      }
       
   
    
  laststate = state;
    delay(0);
  }
