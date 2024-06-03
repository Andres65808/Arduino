#include <Servo.h>
Servo servo1 ;
int retardo;
int pinservo =2;
int pulsomin = 500;
int pulsomax = 2500;
int sw1, sw2;
int pot; 
int angulo;
void setup()
{
servo1.attach(pinservo, pulsomin,pulsomax);
pinMode(13,INPUT);
pinMode(12,INPUT);
pinMode(A0,INPUT);
}
void loop() 
{
int sw1 = digitalRead(12);
int sw2 = digitalRead(13);
int retardo = analogRead(A0);
//apagado 0,0
if ( sw1 == 0 && sw2 ==0)
{
servo1.write(0);
delay(retardo);
servo1.write(0);
delay(retardo);
}
//45 grados 0,1
if ( sw1 == 0 && sw2 ==1)
{
servo1.write(0);
delay(retardo);
servo1.write(45);
delay(retardo);
}
//90 grados 1,0
if ( sw1 == 1 && sw2 ==0)
{
servo1.write(0);
delay(retardo);
servo1.write(90);
delay(retardo);
}
//siuge el valor del potenciometro 1,1
if ( sw1 == 1 && sw2 ==1)
{
pot = analogRead(A0);
angulo = map (pot,0,1023,0,180);
servo1.write(angulo);
delay(20);
}
}
