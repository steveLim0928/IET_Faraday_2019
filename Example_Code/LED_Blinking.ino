const int rLedPin = 2;
const int gLedPin = 3;
const int bLedPin = 4;

void setup() {
  // put your setup code here, to run once:

  pinMode (rLedPin, OUTPUT);
  pinMode (gLedPin, OUTPUT);
  pinMode (bLedPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite (rLedPin, HIGH);
  digitalWrite (gLedPin, LOW);
  digitalWrite (bLedPin, LOW);
  delay (1000);
  
  digitalWrite (rLedPin, LOW);
  digitalWrite (gLedPin, HIGH);
  digitalWrite (bLedPin, LOW);
  delay (1000);
  
  digitalWrite (rLedPin, LOW);
  digitalWrite (gLedPin, LOW);
  digitalWrite (bLedPin, HIGH);
  delay (1000);

}
