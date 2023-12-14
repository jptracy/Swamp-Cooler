// Running State Function
// This state is active when the system needs to run due to environmental conditions.
void RunningState() {
  if (toggle != 3) {
    toggle = 3;
    lcd.clear();
    *portBData |= B00001000;
    *portBData &= B11111101;
    *portBData &= B11111011;
    *portBData &= B11111110;
    *portBData |= B10000000;  // Turn on the fan
  }
  DHTSensor();
  VentControl();
  Serial.println("RUNNING State");
  ClockModule();
}