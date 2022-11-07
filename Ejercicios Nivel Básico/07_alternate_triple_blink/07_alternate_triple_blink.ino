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
  if (counter < timesBeforeChange ){
    digitalWrite(ledPinA, HIGH);
  }

  if (counter >= timesBeforeChange){
    digitalWrite(ledPinB, HIGH);
  }
  
  delay(timeLight);

  digitalWrite(ledPinA, LOW);
  digitalWrite(ledPinB, LOW);

  delay(timeLight);

  counter++;

  if (counter == timesBeforeChange*2){ // reset
    counter = 0;
  }
}