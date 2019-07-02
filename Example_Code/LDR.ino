const int ldrPin = A0;

int ldrVal;

void setup() {
  // put your setup code here, to run once:

  pinMode (ldrPin, INPUT);
  Serial.begin (9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  ldrVal = analogRead (ldrPin);

  Serial.println (ldrVal);
  delay (100);

}
