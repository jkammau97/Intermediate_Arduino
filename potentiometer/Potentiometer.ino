//potentiometer.ino
#include <Wire.h>
#include <LiquidCrystal.h>
#include <LiquidCrystal_I2C.h>

#define ANALOG_PIN A1
#define LED_PIN 3
float brightness;
LiquidCrystal_I2C lcd(0x27,16,2);
// sometimes 0x27 works when 0x3F doesn't
// that's the I2C address of the backpack 
void setup()
{
	Serial.begin(9600);
	pinMode(LED_PIN, OUTPUT);
	pinMode(ANALOG_PIN, INPUT);

	lcd.begin (16,2); // for 16 x 2 LCD module
	lcd.init();
	lcd.backlight();
	lcd.setBacklight(HIGH);
	lcd.setCursor(0,0);
	lcd.print("POWER");
	delay(100);
}

void loop()
{
	brightness = analogRead(ANALOG_PIN);
	lcd.setCursor(0,1);
	lcd.print(map(brightness,0,1023,0,10));
	Serial.println(map(brightness,0,1023,0,10));
	analogWrite(LED_PIN, map(brightness,0,1023,0,255));
	delay(100);
	lcd.print("          ");
}

