//Photointerruptor.ino

#define LEDPIN 13
#define PHOTO_PIN 3
int n = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(LEDPIN, OUTPUT);
  pinMode(PHOTO_PIN, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(PHOTO_PIN), n = 1, FALLING);
  attachInterrupt(digitalPinToInterrupt(PHOTO_PIN), n = 0, RISING);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LEDPIN, n);
}
