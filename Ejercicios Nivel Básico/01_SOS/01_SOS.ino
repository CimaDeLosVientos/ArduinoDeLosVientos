/*
    SOS = ··· --- ···
*/

const int ledPin =  13;      // the number of the LED pin

// Times
const int timeShortPulse = 250;
const int timeLongPulse = 500;
const int timeBetweenPulses = 500;
const int timeBetweenLetters = 1000;
const int timeBetweenWords = 2000;


void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // S
    // .
    digitalWrite(ledPin, HIGH);
    delay(timeShortPulse);
    digitalWrite(ledPin, LOW);

    delay(timeBetweenPulses);

    // .
    digitalWrite(ledPin, HIGH);
    delay(timeShortPulse);
    digitalWrite(ledPin, LOW);

    delay(timeBetweenPulses);

    // .
    digitalWrite(ledPin, HIGH);
    delay(timeShortPulse);
    digitalWrite(ledPin, LOW);

  delay(timeBetweenLetters);

  // O
    // -
    digitalWrite(ledPin, HIGH);
    delay(timeLongPulse);
    digitalWrite(ledPin, LOW);

    delay(timeBetweenPulses);

    // -
    digitalWrite(ledPin, HIGH);
    delay(timeLongPulse);
    digitalWrite(ledPin, LOW);

    delay(timeBetweenPulses);

    // -
    digitalWrite(ledPin, HIGH);
    delay(timeLongPulse);
    digitalWrite(ledPin, LOW);

  delay(timeBetweenLetters);

  // S
    // .
    digitalWrite(ledPin, HIGH);
    delay(timeShortPulse);
    digitalWrite(ledPin, LOW);

    delay(timeBetweenPulses);

    // .
    digitalWrite(ledPin, HIGH);
    delay(timeShortPulse);
    digitalWrite(ledPin, LOW);

    delay(timeBetweenPulses);

    // .
    digitalWrite(ledPin, HIGH);
    delay(timeShortPulse);
    digitalWrite(ledPin, LOW);

  delay(timeBetweenWords);
}
