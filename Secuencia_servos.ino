#include<Servo.h>                 //Incluye a biblioteca que nos ayuda a controlar los servos

Servo myServo1;                   //Crea el objeto "myServo1" que se refiere a un servomotor
Servo myServo2;                   //Crea el objeto "myServo2" que se refiere a un servomotor
Servo myServo3;                   //Crea el objeto "myServo3" que se refiere a un servomotor
Servo myServo4;                   //Crea el objeto "myServo4" que se refiere a un servomotor

int Ang1;                         //Crea la variable "Ang1" que nos sirve para guardar el valor del angulo de "myServo1"
int Ang2;                         //Crea la variable "Ang2" que nos sirve para guardar el valor del angulo de "myServo2"
int Ang3;                         //Crea la variable "Ang3" que nos sirve para guardar el valor del angulo de "myServo3"
int Ang4;                         //Crea la variable "Ang4" que nos sirve para guardar el valor del angulo de "myServo4"

void setup() {
  myServo1.attach(2);             //Fija el pin digital 2 como la salida de señal del Servo1 (ajustar a su circuito)
  myServo2.attach(3);             //Fija el pin digital 3 como la salida de señal del Servo2 (ajustar a su circuito)
  myServo3.attach(4);             //Fija el pin digital 4 como la salida de señal del Servo3 (ajustar a su circuito)
  myServo4.attach(5);             //Fija el pin digital 5 como la salida de señal del Servo4 (ajustar a su circuito)

  myServo1.write(0);             //Define la posición de "myServo1" a 90°  (ajustar a sus valores del "HOME")
  myServo2.write(0);              //Define la posición de "myServo1" a 0°   (ajustar a sus valores del "HOME")
  myServo3.write(120);            //Define la posición de "myServo1" a 120° (ajustar a sus valores del "HOME")
  myServo4.write(179);            //Define la posición de "myServo1" a 179° (ajustar a sus valores del "HOME")

  Serial.begin(9600);             //Inicia el puerto de comunicación serial a una velocidad de 9600 BAUDS
}

void loop() {
  for(Ang1=0;Ang1<179;Ang1+=1){  //Definición de un ciclo "for" tomando en cuenta un valor inicial de la variable "Ang1" de 90°, se mantiene mientras que e valor sea menor que 179° y en cada iteración la variable aumenta su valor en +1 
    myServo1.write(Ang1);         //Escribe el valor de la variable en el servomotor
    delay(20);                    //Hace una "pausa" de 20 milisegundos
  }

  for(Ang2=0;Ang2<65;Ang2+=1){    //Definición de un ciclo "for" tomando en cuenta un valor inicial de la variable "Ang2" de 0°, se mantiene mientras que el valor sea menor que 65° y en cada iteración la variable aumenta su valor en +1 
    myServo2.write(Ang2);         //Escribe el valor de la variable en el servomotor
    delay(20);                    //Hace una "pausa" de 20 milisegundos
  }

  for(Ang3=120;Ang3>90;Ang3-=1){  //Definición de un ciclo "for" tomando en cuenta un valor inicial de la variable "Ang3" de 120°, se mantiene mientras que el valor sea mayor que 90° y en cada iteración la variable disminuye su valor en -1
    myServo3.write(Ang3);         //Escribe el valor de la variable en el servomotor
    delay(20);                    //Hace una "pausa" de 20 milisegundos
  }

  for(Ang4=179;Ang4>90;Ang4-=1){  //Definición de un ciclo "for" tomando en cuenta un valor inicial de la variable "Ang4" de 179°, se mantiene mientras que el valor sea mayor que 90° y en cada iteración la variable disminuye su valor en -1
    myServo4.write(Ang4);         //Escribe el valor de la variable en el servomotor
    delay(20);                    //Hace una "pausa" de 20 milisegundos
  }

  for(Ang4=90;Ang4<179;Ang4+=1){  //Definición de un ciclo "for" tomando en cuenta un valor inicial de la variable "Ang4" de 90°, se mantiene mientras que el valor sea menor que 179° y en cada iteración la variable aumenta su valor en +1
    myServo4.write(Ang4);         //Escribe el valor de la variable en el servomotor
    delay(20);                    //Hace una "pausa" de 20 milisegundos
  }

  for(Ang3=90;Ang3<120;Ang3+=1){  //Definición de un ciclo "for" tomando en cuenta un valor inicial de la variable "Ang3" de 90°, se mantiene mientras que el valor sea menor que 120° y en cada iteración la variable aumenta su valor en +1
    myServo3.write(Ang3);         //Escribe el valor de la variable en el servomotor
    delay(20);                    //Hace una "pausa" de 20 milisegundos
  }

  for(Ang2=65;Ang2>0;Ang2-=1){    //Definición de un ciclo "for" tomando en cuenta un valor inicial de la variable "Ang2" de 65°, se mantiene mientras que el valor sea mayor que 0° y en cada iteración la variable disminuye su valor en -1
    myServo2.write(Ang2);         //Escribe el valor de la variable en el servomotor
    delay(20);                    //Hace una "pausa" de 20 milisegundos
  }

  for(Ang1=179;Ang1>0;Ang1-=1){  //Definición de un ciclo "for" tomando en cuenta un valor inicial de la variable "Ang1" de 179°, se mantiene mientras que el valor sea mayor que 90° y en cada iteración la variable disminuye su valor en -1
    myServo1.write(Ang1);         //Escribe el valor de la variable en el servomotor
    delay(20);                    //Hace una "pausa" de 20 milisegundos
  }

}
  

