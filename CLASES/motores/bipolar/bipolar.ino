#define IN1 4
#define IN2 5
#define IN3 6
#define IN4 7
int SW1;
int sw2;
int pot;
void setup()
{
 Serial.begin(9600);
 pinMode(3,INPUT);
 pinMode(2,INPUT);
 pinMode(IN1,OUTPUT);
 pinMode(IN2,OUTPUT);
 pinMode(IN3,OUTPUT);
 pinMode(IN4,OUTPUT);
}
void loop() 
{
pot = analogRead(A0);
pot = map (pot, 0,1023,0,255);

int sw1 = digitalRead(2);
int sw2 = digitalRead(3);
int i=0;
Serial.print("sw1: ");
Serial.println(sw1);
Serial.print("sw2: ");
Serial.println(sw2);

if( sw1 ==0 && sw2 == 0)
{
Serial.println("apagado");
digitalWrite(IN1,0);
digitalWrite(IN2,0);
digitalWrite(IN3,0);
digitalWrite(IN4,0);
delay(pot);
}
if( sw1 ==0 && sw2 == 1)
{

Serial.println("derecha");
digitalWrite(IN1, 1);
digitalWrite(IN2,0 );
digitalWrite(IN3,1 );
digitalWrite(IN4, 0);
delay(pot);
digitalWrite(IN1, 1);
digitalWrite(IN2,0 );
digitalWrite(IN3,0 );
digitalWrite(IN4, 1);
delay(pot);
digitalWrite(IN1, 0);
digitalWrite(IN2,1 );
digitalWrite(IN3,0 );
digitalWrite(IN4, 1);
delay(pot);
digitalWrite(IN1, 0);
digitalWrite(IN2,1 );
digitalWrite(IN3,1 );
digitalWrite(IN4, 0);
delay(pot);
}
if( sw1 ==1 && sw2 == 0)
{
Serial.println("izquierda");
digitalWrite(IN1, 0);
digitalWrite(IN2,1 );
digitalWrite(IN3,1 );
digitalWrite(IN4, 0);
delay(pot);
digitalWrite(IN1, 0);
digitalWrite(IN2,1 );
digitalWrite(IN3,0 );
digitalWrite(IN4, 1);
delay(pot);
digitalWrite(IN1, 1);
digitalWrite(IN2,0 );
digitalWrite(IN3,0 );
digitalWrite(IN4, 1);
delay(pot);
digitalWrite(IN1, 1);
digitalWrite(IN2,0 );
digitalWrite(IN3,1 );
digitalWrite(IN4, 0);
delay(pot);
}//fin del ciclo del paso1
//fin del ciclo del paso1
if( sw1 ==1 && sw2 == 1)
{
Serial.println("izquierda");
digitalWrite(IN1, 0);
digitalWrite(IN2,1 );
digitalWrite(IN3,1 );
digitalWrite(IN4, 0);
delay(pot);
digitalWrite(IN1, 0);
digitalWrite(IN2,1 );
digitalWrite(IN3,0 );
digitalWrite(IN4, 1);
delay(pot);
digitalWrite(IN1, 1);
digitalWrite(IN2,0 );
digitalWrite(IN3,0 );
digitalWrite(IN4, 1);
delay(pot);
digitalWrite(IN1, 1);
digitalWrite(IN2,1 );
digitalWrite(IN3,1 );
digitalWrite(IN4, 1);
delay(pot);
}//fin del ciclo del paso3
}
