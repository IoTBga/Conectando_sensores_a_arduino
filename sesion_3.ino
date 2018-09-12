#include <SoftwareSerial.h>

void setup()
{
  Serial.begin(9600); // open serial port, set the baud rate to 9600 bps
}
void loop()
{
      int val;
      val=analogRead(0);   //connect grayscale sensor to Analog 0
      float lux = (val*6000.0)/1023.0;//val*5.86;//(val*6000)/1023;
      Serial.println(lux,DEC);//print the value to serial        
      delay(1000);
}
