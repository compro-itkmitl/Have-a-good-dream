#include <SoftwareSerial.h>

SoftwareSerial NodeSerial(D2, D3); // RX | TX

void setup() {
  pinMode(RX, INPUT);
  pinMode(TX, OUTPUT);
  Serial.begin(115200);

  NodeSerial.begin(4800);

}

void loop() {
  // put your main code here, to run repeatedly:

}
