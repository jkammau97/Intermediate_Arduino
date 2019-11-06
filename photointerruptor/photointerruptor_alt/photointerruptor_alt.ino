//Photointerruptor_alt.ino

#define LEDPIN 4
#define P_RISING 2
#define P_FALLING 3
int count = 0;
int on = 0;
void turnOn()
{
	digitalWrite(LEDPIN, HIGH);
	count = count + 1;
}
void turnOff()
{
	digitalWrite(LEDPIN, LOW);
}

void setup() {
	Serial.begin(9600);
	pinMode(P_RISING, INPUT_PULLUP);
	pinMode(P_FALLING, INPUT_PULLUP);
	pinMode(LEDPIN, OUTPUT);

	attachInterrupt(digitalPinToInterrupt(P_RISING), turnOn, RISING);
	attachInterrupt(digitalPinToInterrupt(P_FALLING), turnOff, FALLING);
}

void loop() {
  // put your main code here, to run repeatedly:
	Serial.print(count);
	Serial.print("\n");
}
