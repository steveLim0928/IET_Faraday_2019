//Data Sheet: https://cdn.sparkfun.com/datasheets/Sensors/Proximity/HCSR04.pdf

const int trigPin = 2;
const int echoPin = 3;

long timeReturn, distance;

void setup() {
  // put your setup code here, to run once:

  Serial.begin (9600);
  pinMode (trigPin, OUTPUT);
  pinMode (echoPin, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite (trigPin, LOW);
  delayMicroseconds (2);
  digitalWrite (trigPin, HIGH);
  delayMicroseconds (10);
  digitalWrite (trigPin, LOW);

  timeReturn = pulseIn (echoPin, HIGH);
  distance = timeReturn / 58;
  Serial.println (distance);
  delay (100);

}
