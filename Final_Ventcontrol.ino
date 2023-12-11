// Stepper motor vent control

void Vent_control()
{
  int steps = stepsPerRevolution/360;

    while(*pin_k == B00000010) //Analog pin 9
    {
      myStepper.step(steps);  // Rotate left
      Serial.println (" rotating left");
    }

    while(*pin_k == B00000100) //Analog pin 10
    {
      myStepper.step(-steps); // Rotate right
      Serial.println ("rotating right");
    }
}
