// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int p_red = 9;
int p_green = 10;
int p_blue = 11;

int red;
int green;
int blue;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(p_red, OUTPUT);
  pinMode(p_green, OUTPUT);
  pinMode(p_blue, OUTPUT);
  Serial.begin(9600);      // open the serial port at 9600 bps:
}

void setColor(int porcent){

}

void setRandom(){
 
}


// the loop routine runs over and over again forever:
void loop() {

}
