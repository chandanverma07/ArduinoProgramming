#include <ESP8266WiFi.h>
WiFiServer server(80);
void setup()
{
  WiFi.mode(WIFI_AP);
  WiFi.softAP("CHANDAN_NODEMCU","12345678");
  server.begin();
}
void loop()
{
}


