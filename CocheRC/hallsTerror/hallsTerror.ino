/*
  Para comunicar nuestro coche radiocontrol usaremos una liberia que nos permitira definir
 2 pines como entrada y salida para el modulo bluetooth que no seran los definidos por defecto
 (0 y 1), haciendo esto podremos usar la consola del ordenador para facilitar las pruebas.
 */
#include <SoftwareSerial.h>
SoftwareSerial BT1(4,2); // RX, TX recorder que se cruzan

// Vamos a nombrar los pines que vamos a usar.
#define leftMotorF 
#define leftMotorB 
#define rightMotorF 
#define rightMotorB 

// Definimos las variables asociadas al movimiento del coche y una funcion para cambiarlas rapidamente
int velocidadR; // Las velocidades de cada rueda
int velocidadI;
int estado;	// El estado define si el coche esta detenido (0), en marcha (1) o marcha atras (-1)
int marcha; // La marcha es un modificador (multiplicador) de la velocidad.

void setValues(int sv_velocidadI, int sv_velocidadR, int sv_estado, int sv_marcha){
  velocidadI = sv_velocidadI;
  velocidadR = sv_velocidadR;
  estado = sv_estado;
  marcha = sv_marcha;
}

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(leftMotorF, OUTPUT);
  pinMode(leftMotorB, OUTPUT);
  pinMode(rightMotorF, OUTPUT);
  pinMode(rightMotorB, OUTPUT);
  Serial.begin(9600);      // open the serial port at 9600 bps:
  Serial.println("Enter AT commands:");
  BT1.begin(9600);
}

/*
  El coche tendra dos estados, "En marcha" y "Parado". Tendremos 2 acciones mediante la aplicacion, "Arrancar" y "Detener".
 De esta forma una vez el coche este en marcha podremos cambiar las velocidades o hacer que gire mientras sigue en marcha.
 */

/*
  Al arrancar el coche se pondra en movimiento. El movimiento sera hacia el frente en primera marcha.
 */
void arrancar(){ //Quiza deberia solo permitirse con el coche detenido
  Serial.println("Arrancando!");
  setValues(51, 51, 1, 1);
}
/*
  El coche se detiene, poniendo las variables a 0
 */
void detener(){
  Serial.println("Parando!");
  setValues(0, 0, 0, 0);
}
/*
  Los giros se realizan disminuyendo la velocidad de una de las ruedas, la cantidad se deberia determinar
 en la fase de pruebas (la mitad actualmente).
 */
void girarI(){
  Serial.println("Girando a la izquierda!");
  setValues(25*marcha, 51*marcha, estado, marcha);
}
void girarD(){
  Serial.println("Girando a la derecha!");
  setValues(51*marcha, 25*marcha, estado, marcha);
}

/*
  La marcha atras solo tiene la peculariedad de cambiar el estado, el cual se tiene en cuenta a la hora de escribir
 en los pines la señal. Ademas se empieza la marcha atras en la marcha minima.
 Es posible que no deba haber marchas cuando se conduce hacia atras, y que tampoco se deba permitir la marcha
 atras sin detener previamente el coche.
 */
void marchaAtras(){
  Serial.println("Marcha Atras!");
  setValues(51, 51, -1, 1);
}
/*
  Los aumentos y disminuciones de marcha se limitan a modificar controladamente el valor de la variable "marcha".
 */
void disminuirMarcha(){
  if(marcha > 1){
    Serial.println("Disminuyendo marcha!");
    marcha--;
  }
  else{
    Serial.println("Marcha minima");
  } 	
}
void aumentarMarcha(){
  if(marcha < 5){
    Serial.println("Aumentando marcha!");
    marcha++;
  }
  else{
    Serial.println("Marcha maxima");
  } 
}

/*
  El coche al estar en marcha avanzara hacia delante a velocidad constante, y solo mientras sean accionados los botones
 del RC para girar, el coche girara. Por lo que al no ser pulsado ningun boton, el coche avanzara hacia delante, se
 mantendra detenido o continuara dirigiendose hacia atras en linea recta en funcion del estado.
 */
void continuar(){
  if (marcha == -1){ // MarchaAtras
    setValues(51*marcha, 51*marcha, -1, marcha);
  }
  else if (marcha == 0) { // Parado
    setValues(0, 0, 0, 0);
  }
  else{ // Avanzando
    setValues(51*marcha, 51*marcha, 1, marcha);
  }
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
  if (BT1.available()){ //Obtenemos la funcion que está ejecutando
    if(BT1.read() == '0'){ // Arrancar
      Serial.write(BT1.read());
      arrancar();

    }
    else if(BT1.read() == '1'){ // Detener
      Serial.write(BT1.read());
      detener();

    }
    else if(BT1.read() == '2'){ // Girar izquierda
      Serial.write(BT1.read());
      girarI();

    }
    else if(BT1.read() == '3'){ // Girar derecha
      Serial.write(BT1.read());
      girarD();

    }
    else if(BT1.read() == '4'){ // Disminuir marcha
      Serial.write(BT1.read());
      disminuirMarcha();

    }
    else if(BT1.read() == '5'){ // Aumentar marcha
      Serial.write(BT1.read());
      aumentarMarcha();

    }
  }  
  else{ //Si no se realiza ninguna funcion, sigue su curso normal (seguir avanzando hacia delante, atras
  // o mantenerse detenido)
    continuar();
  }

  // Por ultimo, se le envia al coche la señal correspondiente para su movimiento.
  if (marcha == -1){ // MarchaAtras
    analogWrite(leftMotorF, 0);
    analogWrite(leftMotorB, velocidadI);
    analogWrite(rightMotorF, 0);
    analogWrite(rightMotorB, velocidadR);
  }
  //  else if (marcha == 0) { // Parado
  //  	analogWrite(leftMotorF, 0);
  //	analogWrite(leftMotorB, 0);
  //	analogWrite(rightMotorF, 0);
  //	analogWrite(rightMotorB, 0);
  //  }
  else{ // Avanzando
    analogWrite(leftMotorF, velocidadI);
    analogWrite(leftMotorB, 0);
    analogWrite(rightMotorF, velocidadR);
    analogWrite(rightMotorB, 0);
  }



  if (Serial.available()){
    char s = GetLine();
    BT1.println(s);
    Serial.println("---> " + s);
  }
}

