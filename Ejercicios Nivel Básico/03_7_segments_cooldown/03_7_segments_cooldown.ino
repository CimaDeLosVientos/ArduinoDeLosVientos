// https://create.arduino.cc/projecthub/aboda243/get-started-with-seven-segment-c73200

// pins
const int ledPinA = 5;
const int ledPinB = 6;
const int ledPinC = 7;
const int ledPinD = 8;
const int ledPinE = 9;
const int ledPinF = 10;
const int ledPinG = 11;
const int ledPinDP = 12;

// Times
const int timeStep = 1000;

void setup() {
  pinMode(ledPinA, OUTPUT);
  pinMode(ledPinB, OUTPUT);
  pinMode(ledPinC, OUTPUT);
  pinMode(ledPinD, OUTPUT);
  pinMode(ledPinE, OUTPUT);
  pinMode(ledPinF, OUTPUT);
  pinMode(ledPinG, OUTPUT);
  pinMode(ledPinDP, OUTPUT);
}

void loop() {
  /*
  // All off
  digitalWrite(ledPinA, LOW);
  digitalWrite(ledPinB, LOW);
  digitalWrite(ledPinC, LOW);
  digitalWrite(ledPinD, LOW);
  digitalWrite(ledPinE, LOW);
  digitalWrite(ledPinF, LOW);
  digitalWrite(ledPinG, LOW);
  digitalWrite(ledPinDP, LOW);
  */

  // 9
  digitalWrite(ledPinA, HIGH);
  digitalWrite(ledPinB, HIGH);
  digitalWrite(ledPinC, HIGH);
  digitalWrite(ledPinD, HIGH);
  digitalWrite(ledPinE, LOW);
  digitalWrite(ledPinF, HIGH);
  digitalWrite(ledPinG, HIGH);
  digitalWrite(ledPinDP, LOW);

  delay(timeStep);
  
  // 8
  digitalWrite(ledPinA, HIGH);
  digitalWrite(ledPinB, HIGH);
  digitalWrite(ledPinC, HIGH);
  digitalWrite(ledPinD, HIGH);
  digitalWrite(ledPinE, HIGH);
  digitalWrite(ledPinF, HIGH);
  digitalWrite(ledPinG, HIGH);
  digitalWrite(ledPinDP, LOW);

  delay(timeStep);
  
  // 7
  digitalWrite(ledPinA, HIGH);
  digitalWrite(ledPinB, HIGH);
  digitalWrite(ledPinC, HIGH);
  digitalWrite(ledPinD, LOW);
  digitalWrite(ledPinE, LOW);
  digitalWrite(ledPinF, LOW);
  digitalWrite(ledPinG, LOW);
  digitalWrite(ledPinDP, LOW);

  delay(timeStep);

  // 6
  digitalWrite(ledPinA, HIGH);
  digitalWrite(ledPinB, LOW);
  digitalWrite(ledPinC, HIGH);
  digitalWrite(ledPinD, HIGH);
  digitalWrite(ledPinE, HIGH);
  digitalWrite(ledPinF, HIGH);
  digitalWrite(ledPinG, HIGH);
  digitalWrite(ledPinDP, LOW);

  delay(timeStep);

  // 5
  digitalWrite(ledPinA, HIGH);
  digitalWrite(ledPinB, LOW);
  digitalWrite(ledPinC, HIGH);
  digitalWrite(ledPinD, HIGH);
  digitalWrite(ledPinE, LOW);
  digitalWrite(ledPinF, HIGH);
  digitalWrite(ledPinG, HIGH);
  digitalWrite(ledPinDP, LOW);

  delay(timeStep);

  // 4
  digitalWrite(ledPinA, LOW);
  digitalWrite(ledPinB, HIGH);
  digitalWrite(ledPinC, HIGH);
  digitalWrite(ledPinD, LOW);
  digitalWrite(ledPinE, LOW);
  digitalWrite(ledPinF, HIGH);
  digitalWrite(ledPinG, HIGH);
  digitalWrite(ledPinDP, LOW);

  delay(timeStep);

  // 3
  digitalWrite(ledPinA, HIGH);
  digitalWrite(ledPinB, HIGH);
  digitalWrite(ledPinC, HIGH);
  digitalWrite(ledPinD, HIGH);
  digitalWrite(ledPinE, LOW);
  digitalWrite(ledPinF, LOW);
  digitalWrite(ledPinG, HIGH);
  digitalWrite(ledPinDP, LOW);

  delay(timeStep);

  // 2
  digitalWrite(ledPinA, HIGH);
  digitalWrite(ledPinB, HIGH);
  digitalWrite(ledPinC, LOW);
  digitalWrite(ledPinD, HIGH);
  digitalWrite(ledPinE, HIGH);
  digitalWrite(ledPinF, LOW);
  digitalWrite(ledPinG, HIGH);
  digitalWrite(ledPinDP, LOW);

  delay(timeStep);

  // 1
  digitalWrite(ledPinA, LOW);
  digitalWrite(ledPinB, HIGH);
  digitalWrite(ledPinC, HIGH);
  digitalWrite(ledPinD, LOW);
  digitalWrite(ledPinE, LOW);
  digitalWrite(ledPinF, LOW);
  digitalWrite(ledPinG, LOW);
  digitalWrite(ledPinDP, LOW);

  delay(timeStep);

  // 0
  digitalWrite(ledPinA, HIGH);
  digitalWrite(ledPinB, HIGH);
  digitalWrite(ledPinC, HIGH);
  digitalWrite(ledPinD, HIGH);
  digitalWrite(ledPinE, HIGH);
  digitalWrite(ledPinF, HIGH);
  digitalWrite(ledPinG, LOW);
  digitalWrite(ledPinDP, LOW);

  delay(timeStep);
}
