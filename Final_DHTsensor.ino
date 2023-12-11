//DHT Sensor setup

double DHT_sensor() 
{
  float h = dht.readHumidity(); // read humidity
  float f = dht.readTemperature(true);  // read temp (fahrenheit = true)

  if (isnan(h) || isnan(f)) // check for failure to read humid or temp
  {
    Serial.println(F("Failed to read from DHT sensor"));
    return;
  }
  LCD_data(h, f); // display humid and temp values to lcd

  return f;
}