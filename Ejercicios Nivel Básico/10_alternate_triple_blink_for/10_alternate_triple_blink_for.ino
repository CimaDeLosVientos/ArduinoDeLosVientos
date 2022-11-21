// pins
const int ledPinA = 5;
const int ledPinB = 6;

// variables
const int timeLight = 500;
const int timesBeforeChange = 3;


void setup() {
  pinMode(ledPinA, OUTPUT);
  pinMode(ledPinB, OUTPUT);
}

void loop() {

  for (int counter = 0; counter < timesBeforeChange; counter++){
    digitalWrite(ledPinA, HIGH);
    delay(timeLight);
    digitalWrite(ledPinA, LOW);
    delay(timeLight);
  }


  for (int counter = 0; counter < timesBeforeChange; counter++){
    digitalWrite(ledPinB, HIGH);
    delay(timeLight);
    digitalWrite(ledPinB, LOW);
    delay(timeLight);
  }

  counter = 0; // reset
}