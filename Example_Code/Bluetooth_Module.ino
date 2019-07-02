#include <SoftwareSerial.h>

SoftwareSerial myBluetooth (10, 11); //TX, RX

String message = "Bluetooth is working!";

void setup() {
  // put your setup code here, to run once:

  myBluetooth.begin (9600);
  Serial.begin (9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  myBluetooth.println (message);
  Serial.println (message);
  delay (1000);
  myBluetooth.println ("");
  Serial.println ("");
  delay (1000);

}
