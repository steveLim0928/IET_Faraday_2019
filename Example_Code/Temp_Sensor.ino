//MCP9700 data sheet: http://ww1.microchip.com/downloads/en/devicedoc/20001942g.pdf

const int tempSensorPin = A5;

float tempSensorVal, temp;

void setup() {
  // put your setup code here, to run once:

  Serial.begin (9600);
  pinMode (tempSensorPin, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  tempSensorVal = analogRead (tempSensorPin);

  temp = 100 * ((tempSensorVal/1023)*5) - 50;

  Serial.println (temp);
  delay (100);

}
