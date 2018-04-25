void loop() {
  io_status = digitalRead(IO_SWITCH);
  Serial.println(io_status);
  digitalWrite(TX, io_status);  //  send I/O Status to nodemcu
  //  get firebase status from nodemcu
  firebase_status = digitalRead(RX);

  //  I/O Switch on
  if (io_status == HIGH) {
    //  get value from potentiometer for cradle speed
    c_speed = 5 * ((analogRead(POTEN) * 0.00391) + 1);

    Serial.println(c_speed);
    Serial.println(analogRead(POTEN));

    //  firebase Switch on
    if (firebase_status == HIGH) {
      //  Servo
      for (pos_1 = 45; pos_1 <= 135; pos_1 += 1) {
        pos_2 = 180 - pos_1;
        SERVO_1.write(pos_1);
        SERVO_2.write(pos_2);
        delay(c_speed);
      }
      for (pos_2 = 45; pos_2 <= 135; pos_2 += 1) {
        pos_1 = 180 - pos_2;
        SERVO_1.write(pos_1);
        SERVO_2.write(pos_2);
        delay(c_speed);
      }
    }

    //  firebase Switch off
    else if (firebase_status == LOW) {
      SERVO_1.write(90);
      SERVO_2.write(90);
    }
  }

  //  I/O Switch off
  else if (io_status == LOW) {
    SERVO_1.write(90);
    SERVO_2.write(90);
  }
}

