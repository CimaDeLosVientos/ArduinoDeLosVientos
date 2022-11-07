// pins
const int ledPinA = 5;
const int ledPinB = 6;

// variables
const int timeLight = 500;
int counter;
const int timesBeforeChange = 3;


void setup() {
  pinMode(ledPinA, OUTPUT);
  pinMode(ledPinB, OUTPUT);
  counter = 0;
}

void loop() {
  while (counter < timesBeforeChange ){
    digitalWrite(ledPinA, HIGH);
    delay(timeLight);
    digitalWrite(ledPinA, LOW);
    delay(timeLight);
    counter++;
  }

  counter = 0; // reset

  while (counter < timesBeforeChange ){
    digitalWrite(ledPinB, HIGH);
    delay(timeLight);
    digitalWrite(ledPinB, LOW);
    delay(timeLight);
    counter++;
  }

  counter = 0; // reset
}