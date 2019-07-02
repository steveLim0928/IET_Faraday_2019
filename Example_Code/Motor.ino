//2N2222 data sheet: https://www.onsemi.com/pub/Collateral/P2N2222A-D.PDF

const int motorPin = 3;

void setup() {
  // put your setup code here, to run once:

  pinMode (motorPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  analogWrite (motorPin, 0);
  delay (2000);
  analogWrite (motorPin, 100);
  delay (2000);
  analogWrite (motorPin, 200);
  delay (2000);
  analogWrite (motorPin, 255);
  delay (2000);

}
