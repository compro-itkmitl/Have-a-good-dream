void loop() {
  io_status = digitalRead(IO_SWITCH);
  //  get firebase status from nodemcu
  firebase_status = digitalRead(RX);

  //  I/O Switch on
  if (io_status == HIGH) {
    //  get value from potentiometer for cradle speed
    c_speed = 2 * (((analogRead(POTEN) * 391)/100000) + 1);

    //  firebase Switch on
    if (firebase_status == HIGH) {
      //  Servo
      start();
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
      go_to_zero();
    }
  }

  //  I/O Switch off
  else if (io_status == LOW) {
    go_to_zero();
  }
}

