// pins
const int ledPinA = 5;
const int ledPinB = 6;

// Times
const int timeStep = 1000;

void setup() {
  pinMode(ledPinA, OUTPUT);
  pinMode(ledPinB, OUTPUT);
}

void loop() {
  digitalWrite(ledPinA, HIGH);
  //delay(timeStep);
    digitalWrite(ledPinB, HIGH);
    delay(timeStep/2);
      
    digitalWrite(ledPinB, LOW);
    delay(timeStep/2);
    
  digitalWrite(ledPinA, LOW);
  //delay(timeStep);
    digitalWrite(ledPinB, HIGH);
    delay(timeStep/2);
      
    digitalWrite(ledPinB, LOW);
    delay(timeStep/2);
}
