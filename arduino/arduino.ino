#include <Servo.h>
#include <Metro.h>
#include <SoftwareSerial.h>

#define IOswitch 2
#define mic A0

Servo servo_1, servo_2;

Metro servo_goMetro = Metro(499);
Metro servo_backMetro = Metro(1001);
Metro micMetro = Metro(200);

SoftwareSerial ArduinoSerial(3, 2); // RX, TX

int pos_1 = 0, pos_2 = 0, val; 

void setup() {
  servo_1.attach(9);
  servo_2.attach(10);

  pinMode(IOswitch, INPUT);
  pinMode(mic, INPUT);

  Serial.begin (115200);

  ArduinoSerial.begin(4800);
}

void loop() {

  if (micMetro.check() == 1) {
   Serial.println(analogRead(mic)); 
  }

  //  on
  if (digitalRead(IOswitch) == HIGH) {

    //  Servo
    if (servo_goMetro.check() == 1) {
      pos_1 = 0;
      pos_2 = 180;
    }
    if (servo_backMetro.check() == 1) {
      pos_1 = 180;
      pos_2 = 0;
    }
    servo_1.write(pos_1);
    servo_2.write(pos_2);

  }

  // off
  else {

    //  Servo Setup
    servo_1.write(90);
    servo_2.write(90);

  }

}
