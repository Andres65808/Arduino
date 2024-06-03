#define IN1 2
#define IN2 3
#define IN3 4
#define IN4 5
int pot;
int paso0 [4][4] = //apagado
{
  {0, 0, 0, 0},
  {0, 0, 0, 0},
  {0, 0, 0, 0},
  {0, 0, 0, 0},
};
int paso1 [4][4] = //paso simle
{
  {1, 0, 0, 0},
  {0, 1, 0, 0},
  {0, 0, 1, 0},
  {0, 0, 0, 1},
};
void setup()
{
 pinMode(13,INPUT);
 pinMode(12,INPUT);
 pinMode(IN1,OUTPUT);
 pinMode(IN2,OUTPUT);
 pinMode(IN3,OUTPUT);
 pinMode(IN4,OUTPUT);
}
void loop() 
{
 
pot = analogRead(A0);
pot = map (pot, 0,1023,0,255);
int sw1 = digitalRead(12);
int sw2 = digitalRead(13);
int decimal = (sw1*2)+(sw2*1);

switch(decimal)
{
  case 0:
  digitalWrite(IN1,0);
  digitalWrite(IN2,0);
  digitalWrite(IN3,0);C
  digitalWrite(IN4,0);
  delay(pot);
  break;
  case 1:
  for( int i = 0 ; i<4 ; i++)
  {
  digitalWrite(IN1, paso1 [i][0]);
  digitalWrite(IN2, paso1 [i][1]);
  digitalWrite(IN3, paso1 [i][2]);
  digitalWrite(IN4, paso1 [i][3]);
  delay(pot);
  }
  break;
  case 2:
  for( int i = 4 ; i>0 ; i--)
  {
  digitalWrite(IN1, paso1 [i][0]);
  digitalWrite(IN2, paso1 [i][1]);
  digitalWrite(IN3, paso1 [i][2]);
  digitalWrite(IN4, paso1 [i][3]);
  delay(pot);
  }
  break;
  case 3:
  digitalWrite(IN1, 1);
  digitalWrite(IN2, 1);
  digitalWrite(IN3, 1);
  digitalWrite(IN4, 1);
  delay(pot);  
  break;
  
}
}//fin del void loop
