// analog pins
const int led = 9;

// variables
const int timeBetweenLeds = 2000;
int counter = 0;
int size = 5;

int ledValue[] = {0, 100, 150, 200, 255};


void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // write values
  analogWrite(led, ledValue[counter]);
  delay(timeBetweenLeds);

  // update counter
  counter = counter % size;
  counter++;
}