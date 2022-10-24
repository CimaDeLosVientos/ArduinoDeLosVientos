// pins
const int ledRedPin = 5;
const int ledYellowPin = 6;
const int ledGreenPin = 7;

// Times
const int timeRedLight = 4000;
const int timeYellowLight = 2000;
const int timeGreenLight= 4000;

void setup() {
  pinMode(ledRedPin, OUTPUT);
  pinMode(ledYellowPin, OUTPUT);
  pinMode(ledGreenPin, OUTPUT);
}

void loop() {
  // Red status
  digitalWrite(ledRedPin, HIGH);
  delay(timeRedLight);
  digitalWrite(ledRedPin, LOW);
  
  // Yellow status
  digitalWrite(ledYellowPin, HIGH);
  delay(timeYellowLight);
  digitalWrite(ledYellowPin, LOW);

  // green status
  digitalWrite(ledGreenPin, HIGH);
  delay(timeGreenLight);
  digitalWrite(ledGreenPin, LOW);
}
