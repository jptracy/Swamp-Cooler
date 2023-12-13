// DHT Sensor Function
// Reads and returns temperature from the DHT sensor, and updates the LCD.

double DHTSensor() {
  float humidity = dht.readHumidity();  // Read humidity
  float temperatureF = dht.readTemperature(true);  // Read temperature in Fahrenheit

  // Check for failed reading from sensor
  if (isnan(humidity) || isnan(temperatureF)) {
    Serial.println(F("Failed to read from DHT sensor!"));
    return -1;  // Return error code if reading fails
  }

  LCDData(humidity, temperatureF);  // Update LCD with temperature and humidity data
  return temperatureF;  // Return the temperature reading
}
