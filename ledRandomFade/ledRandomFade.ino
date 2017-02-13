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
  analogWrite(p_red, (int)(red*porcent/100.0));
  analogWrite(p_green, (int)(green*porcent/100.0));
  analogWrite(p_blue, (int)(blue*porcent/100.0));
}

void setRandom(){
  red = random(0, 255);
  green = random(0, 255);
  blue = random(0, 255); 
}


// the loop routine runs over and over again forever:
void loop() {
  setRandom();
  // fade in from min to max in increments of 2 porcent:
  for(int fadeValue = 0 ; fadeValue <= 100; fadeValue +=2) { 
    // sets the value:
    setColor(fadeValue);       
    // wait for 30 milliseconds to see the dimming effect    
    delay(30);                            
  } 
  
  // fade out from max to min in increments of 2 porcent:
  for(int fadeValue = 100 ; fadeValue >= 0; fadeValue -=2) { 
    // sets the value:
    setColor(fadeValue);         
    // wait for 30 milliseconds to see the dimming effect    
    delay(30);                            
  } 
}
