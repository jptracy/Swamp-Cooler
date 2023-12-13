// LCD Data Display Function
// Displays humidity and temperature data on the LCD.

void LCDData(float humidity, float temperatureF) {
  lcd.setCursor(0, 0);
  lcd.print("Humidity: ");
  lcd.print(humidity);
  lcd.print("%");

  lcd.setCursor(0, 1);
  lcd.print("Temp: ");
  lcd.print(temperatureF);
  lcd.print(" F");
}

// LCD Error Display Function
// Displays an error message on the LCD, typically for low water level.

void LCDError() {
  lcd.setCursor(0, 0);
  lcd.print("ERROR: LOW WATER");
}
