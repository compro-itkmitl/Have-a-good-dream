void go_to_stop() {
  if (pos_1 != 90 && pos_2 != 90) {
    for (pos_1 = 45; pos_1 <= 90; pos_1 += 1) {
      pos_2 = 180 - pos_1;
      SERVO_1.write(pos_1);
      SERVO_2.write(pos_2);
      delay(c_speed);
    }
  }
  pos_status = 1;
}

