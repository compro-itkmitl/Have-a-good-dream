void setup() {
  Serial.begin(115200);
  SERVO_1.attach(9);
  SERVO_2.attach(10);
  pinMode(IO_SWITCH, INPUT);
  pinMode(POTEN, INPUT);
  pinMode(RX, INPUT);
  pinMode(TX, OUTPUT);
}

