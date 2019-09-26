//LCD Backpack.ino
#include <Wire.h>
#include <LCD.h>
#include <LiquidCrystal_I2C.h>

#define BUTTON_PIN 2
#define SWITCH_PIN 4
int difference = 1;
bool pastButton; //last known state of button
bool pastSwitch;
int n;
bool bPwr;
bool sPwr;
LiquidCrystal_I2C lcd(0x3F,2,1,0,4,5,6,7);
// sometimes 0x27 works when 0x3F doesn't
// that's the I2C address of the backpack 
void setup() {
// put your setup code here, to run once:
	lcd.begin (16,2); // for 16 x 2 LCD module
	lcd.setBacklightPin(3,POSITIVE);
	lcd.setBacklight(HIGH);
	pinMode(BUTTON_PIN, INPUT);
	pinMode(SWITCH_PIN, INPUT);
	lcd.setCursor(0,0);
	lcd.print("Counter");
	n = 0;
	pastButton = 0;
	pastSwitch = 0;
}

void loop() {
// put your main code here, to run repeatedly:
	bPwr = digitalRead(BUTTON_PIN);
	sPwr = digitalRead(SWITCH_PIN);
	if(sPwr == HIGH)
	{
		difference = 1;
	} else 
	{
		difference = -1;
	}
	if(bPwr == HIGH and pastButton == 0)
	{
		n = n + difference;
		lcd.setCursor(0,1);
		lcd.print(n);
		lcd.print("            ");
	}
	pastButton = bPwr;
}
