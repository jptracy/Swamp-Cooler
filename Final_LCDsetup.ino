// LCD setup

void LCD_data(float h, float f) 
{
  lcd.setCursor (0,0);  // set cursor to display humidity on row 1
  lcd.print ("Humidity: ");
  lcd.print (h);
  lcd.print ("%");

  lcd.setCursor (0,1);  // set cursor display temperature (F) on row 2
  lcd.print ("Temp: ");
  lcd.print (f);
  lcd.print (" F");
}

void LCD_error() 
{
  lcd.setCursor (0,0);  // set cursors for error display
  lcd.print("ERROR:");

  lcd.setCursor(0,1);
  lcd.print ("LOW WATER");
}
