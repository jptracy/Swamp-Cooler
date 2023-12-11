// real time clock (RTC)

void clock_module() 
{
    DateTime now = rtc.now();

    Serial.print(now.year(), DEC);  // Serial print date
    Serial.print('-');
    Serial.print(now.month(), DEC);
    Serial.print('-');
    Serial.print(now.day(), DEC);

    Serial.print(" ("); // Serial print day of week
    Serial.print(daysOfTheWeek[now.dayOfTheWeek()]);
    Serial.print(") ");

    Serial.print(now.hour(), DEC);  // Serial print time
    Serial.print(':');
    Serial.print(now.minute(), DEC);
    Serial.print(':');
    Serial.print(now.second(), DEC);
    Serial.println();
}
