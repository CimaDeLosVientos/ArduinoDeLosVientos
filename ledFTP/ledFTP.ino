/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
#include <SoftwareSerial.h>
SoftwareSerial BT1(4,2); // RX, TX recorder que se cruzan
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int p_red = 9;
int p_green = 10;
int p_blue = 11;
int cosita;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(p_red, OUTPUT);
  pinMode(p_green, OUTPUT);
  pinMode(p_blue, OUTPUT);
  Serial.begin(9600);      // open the serial port at 9600 bps:
  Serial.println("Enter AT commands:");
  BT1.begin(9600);
}

void setColor(int red, int green, int blue){
  analogWrite(p_red, red);
  analogWrite(p_green, green);
  analogWrite(p_blue, blue);
}

void setRandom(int time){
  int r, g , b;

  r = random(0, 255);
  g = random(0, 255);
  b = random(0, 255);
  Serial.println(r);
  Serial.println(g );
  Serial.println(b);
  Serial.println("");
  setColor(r, g, b);
  delay(time); 
}

char GetLine(){
  char s;
  if (Serial.available()){
    char s = Serial.read();
    return s;
  }
}


// the loop routine runs over and over again forever:
void loop() {
  //setColor(60, 60, 60);               // wait for a second
  //setRandom(2000);
  
  if (BT1.available())
           if(BT1.read() == '0'){
             
             Serial.write(BT1.read());
             Serial.flush();
             Serial.("bajo");
             setColor(0, 0, 0);
           }
           else{
               Serial.write(BT1.read());
             Serial.println("alto");
             setColor(250, 250, 250);
           }
  
  if (Serial.available()){
    char s = GetLine();
    BT1.println(s);
    Serial.println("---> " + s);
  }
}
