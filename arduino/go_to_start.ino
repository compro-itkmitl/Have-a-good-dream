void go_to_start() {
  if (pos_status == 1) {
    for (pos_2 = 90; pos_2 <= 135; pos_2 += 1) {
      pos_1 = 180 - pos_2;
      SERVO_1.write(pos_1);
      SERVO_2.write(pos_2);
      delay(c_speed);
    }
  }
  pos_status = 0;
}
