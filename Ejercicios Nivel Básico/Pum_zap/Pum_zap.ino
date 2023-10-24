// pins
const int ledPinA = 5;
const int ledPinB = 6;

// variables
const int timeLight = 500;
int counter;
const int multipleA = 2;
const int multipleB = 3;


void setup() {
  pinMode(ledPinA, OUTPUT);
  pinMode(ledPinB, OUTPUT);
  counter = 0;
}

void loop() {
  if (counter % multipleA == 0){
    digitalWrite(ledPinA, HIGH);
  }

  if (counter % multipleB == 0){
    digitalWrite(ledPinB, HIGH);
  }
  
  delay(timeLight);
  
  digitalWrite(ledPinA, LOW);
  digitalWrite(ledPinB, LOW);

  delay(timeLight);

  counter++; // equal to counter += 1; equal to counter = counter + 1;
}