#include "Arduino.h"
#define LED 5
int direction;
float glow;
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  glow = 0;
  direction = 5; //If positive 1, the number is increasing. If negative 1, the number is decreasing.
}

// the loop function runs over and over again forever
void loop() {
	if(glow == 0){
		direction = 5;
	}
	if(glow == 255){
		direction = -5;
	}
	analogWrite(LED, glow);
	glow = glow + direction;
	for(int n = 1; n <= glow/10; n++){
		Serial.print(" ");
	}
	Serial.print("X\n");
	delay(10);
}
