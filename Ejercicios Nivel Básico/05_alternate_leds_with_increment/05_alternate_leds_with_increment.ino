// pins
const int ledPinA = 5;
const int ledPinB = 6;

// Times
const int timeIncrement = 100;
const int timeInitial = 100;

int timeStep;

void setup() {
  pinMode(ledPinA, OUTPUT);
  pinMode(ledPinB, OUTPUT);
  timeStep = timeInitial;
}

void loop() {
  digitalWrite(ledPinA, HIGH);
  delay(timeStep);
  digitalWrite(ledPinA, LOW);
  digitalWrite(ledPinB, HIGH);
  delay(timeStep);
  digitalWrite(ledPinB, LOW);
  
  timeStep += timeIncrement; // equal to timeStep = timeStep + timeIncrement
}
