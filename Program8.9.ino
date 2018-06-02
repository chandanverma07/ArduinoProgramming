#include <ESP8266WiFi.h>
WiFiServer server(80);
void setup()
{
  WiFi.mode(WIFI_AP);
  WiFi.softAP("CHANDAN_NODEMCU","12345678");
  server.begin();
  Serial.begin(115200);
  IPAddress HTTPS_ServerIP=WiFi.softAPIP();
  Serial.println("Server Ip is: " );
  Serial.println(HTTPS_ServerIP);
  pinMode(D7,OUTPUT);
  digitalWrite(D7,LOW);
}
void loop()
{
  WiFiClient client=server.available();
  if(!client)
  {
    return;
  }
  Serial.println("Clint has connected");
  String request=client.readStringUntil('\r');
  Serial.println(request);
  if(request.indexOf("/OFF")!=-1)
  {
    digitalWrite(D7,LOW);
  }
  else if(request.indexOf("/ON")!=-1)
  {
    digitalWrite(D7,HIGH);
  }
  }

