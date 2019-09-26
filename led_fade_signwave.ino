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
	if(glow == 315){
		direction = -5;
	}
	analogWrite(LED, 255*sin(glow/200));
	glow = glow + direction;
	for(int n = 1; n <= 100*sin(glow/200); n++){
		Serial.print(" ");
	}
	Serial.print("X\n");
	delay(10);
	delay(500-glow);
}
