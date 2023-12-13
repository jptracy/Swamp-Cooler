// Ventilation Control Function
// Controls the stepper motor for ventilation based on sensor inputs.

void VentControl() {
  int steps = stepsPerRevolution / 360;  // Calculate steps for partial revolution

  while (*portKInput == B00000010) {  // Analog pin 9
    stepper.step(steps);  // Rotate stepper motor
    Serial.println("Rotating Left");
  }

  while (*portKInput == B00000100) {  // Analog pin 10
    stepper.step(-steps);  // Rotate stepper motor in opposite direction
    Serial.println("Rotating Right");
  }
}
