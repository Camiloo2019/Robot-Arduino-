#include<Servo.h>
#define PINSERVODERECHO 11
#define PINSERVOIZQUIERDO 12

Servo servoIzquierdo;
Servo servoDerecho;
void setup() {
  Serial.begin(9600);
  servoDerecho.attach(PINSERVODERECHO);
  servoIzquierdo.attach(PINSERVOIZQUIERDO);
}

void loop() {
  char orden;
  if(Serial.available()>0)
  {
    orden=Serial.read();
    if(orden=='w')
      {
        servoDerecho.write(0);
        servoIzquierdo.write(180);
        delay(1000);
   }else{
            servoDerecho.write(90);
            servoIzquierdo.write(90);
        }
   if(orden=='s')
      {
        servoDerecho.write(180);
        servoIzquierdo.write(0);
        delay(1000);
   }else{
            servoDerecho.write(90);
            servoIzquierdo.write(90);
        }
  if(orden=='a')
      {
        servoDerecho.write(0);
        servoIzquierdo.write(0);
        delay(1000);
   }else{
            servoDerecho.write(90);
            servoIzquierdo.write(90);
        }
  if(orden=='d')
      {
        servoDerecho.write(180);
        servoIzquierdo.write(180);
        delay(1000);
   }else{
            servoDerecho.write(90);
            servoIzquierdo.write(90);
        }
  }
  }
