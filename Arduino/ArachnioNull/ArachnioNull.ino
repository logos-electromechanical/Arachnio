/* 
  Arachnio Serial Console
  
  This sketch connects the UART of the ESP8266EX on the Arachnio
  to the serial monitor of the host computer. Every byte typed into
  the serial console is transmitted to the ESP8266EX and vice versa.
  
  Make sure to set the speed of the serial console to 115200 baud and
  the line endings to both CR & LF in order to drive the ESP8266EX 
  correctly.
  
  Created 20 Mar 2015
  by Pierce Nichols

  This example code is in the public domain

*/

void setup() {
  char buf[1024];
  long start;
  uint16_t index = 0;
  
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  Serial.begin(115200);   
  while (!Serial);        // Wait for the USB serial to connect
  Serial.println("I live!");
}

void loop() {
}
