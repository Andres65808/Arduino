int letra = 2;
int sw1 = 12;
void setup() 
{
  for( int i = letra ; i<= 9 ; i++)
  {
    pinMode(i, OUTPUT);
    pinMode(A1,INPUT);
    pinMode(sw1,INPUT);
  }
}
void loop() 
{
  int retardo = analogRead(A1);
  int sw = digitalRead (sw1);
  switch(sw)
  {
    case 0:
    //9
    digitalWrite(2,HIGH ) ; //A
    digitalWrite(3,HIGH ) ; // B
    digitalWrite(4,HIGH ) ; //C
    digitalWrite(5,HIGH ) ; // D
    digitalWrite(6,LOW ) ; // E
    digitalWrite(7,HIGH ) ; //F
    digitalWrite(8,HIGH ) ; //G
    delay(retardo) ;
    //8
      digitalWrite(2,1 ) ; //A
    digitalWrite(3,1 ) ; // B
    digitalWrite(4,1 ) ; //C
    digitalWrite(5,1 ) ; // D
    digitalWrite(6,1 ) ; // E
    digitalWrite(7,1 ) ; //F
    digitalWrite(8,1 ) ; //G
    delay(retardo); 
     //7
      digitalWrite(2,1 ) ; //A
    digitalWrite(3,1 ) ; // B
    digitalWrite(4,1 ) ; //C
    digitalWrite(5,0 ) ; // D
    digitalWrite(6,0 ) ; // E
    digitalWrite(7,0 ) ; //F
    digitalWrite(8,0 ) ; //G
    delay(retardo); 
     //6
      digitalWrite(2,1 ) ; //A
    digitalWrite(3,0 ) ; // B
    digitalWrite(4,1 ) ; //C
    digitalWrite(5,1 ) ; // D
    digitalWrite(6,1 ) ; // E
    digitalWrite(7,1 ) ; //F
    digitalWrite(8,1 ) ; //G
    delay(retardo); 
     //5
      digitalWrite(2,1 ) ; //A
    digitalWrite(3,0 ) ; // B
    digitalWrite(4,1 ) ; //C
    digitalWrite(5,1 ) ; // D
    digitalWrite(6,0 ) ; // E
    digitalWrite(7,1 ) ; //F
    digitalWrite(8,1 ) ; //G
    delay(retardo); 
     //4
      digitalWrite(2,0 ) ; //A
    digitalWrite(3,1 ) ; // B
    digitalWrite(4,1 ) ; //C
    digitalWrite(5,0 ) ; // D
    digitalWrite(6,0 ) ; // E
    digitalWrite(7,1 ) ; //F
    digitalWrite(8,1 ) ; //G
    delay(retardo); 
     //3
      digitalWrite(2,1 ) ; //A
    digitalWrite(3,1 ) ; // B
    digitalWrite(4,1 ) ; //C
    digitalWrite(5,1 ) ; // D
    digitalWrite(6,0 ) ; // E
    digitalWrite(7,0 ) ; //F
    digitalWrite(8,1 ) ; //G
    delay(retardo); 
     //2
      digitalWrite(2,1 ) ; //A
    digitalWrite(3,1 ) ; // B
    digitalWrite(4,0 ) ; //C
    digitalWrite(5,1 ) ; // D
    digitalWrite(6,1 ) ; // E
    digitalWrite(7,0 ) ; //F
    digitalWrite(8,1 ) ; //G
    delay(retardo); 
     //1
      digitalWrite(2,0 ) ; //A
    digitalWrite(3,1 ) ; // B
    digitalWrite(4,1 ) ; //C
    digitalWrite(5,0 ) ; // D
    digitalWrite(6,0 ) ; // E
    digitalWrite(7,0 ) ; //F
    digitalWrite(8,0 ) ; //G
    delay(retardo); 
     //0
      digitalWrite(2,1 ) ; //A
    digitalWrite(3,1 ) ; // B
    digitalWrite(4,1 ) ; //C
    digitalWrite(5,1 ) ; // D
    digitalWrite(6,1 ) ; // E
    digitalWrite(7,1 ) ; //F
    digitalWrite(8,0 ) ; //G
    delay(retardo); 
    break;
    case 1:
    //0
      digitalWrite(2,1 ) ; //A
    digitalWrite(3,1 ) ; // B
    digitalWrite(4,1 ) ; //C
    digitalWrite(5,1 ) ; // D
    digitalWrite(6,1 ) ; // E
    digitalWrite(7,1 ) ; //F
    digitalWrite(8,0 ) ; //G
    delay(retardo);
       //1
      digitalWrite(2,0 ) ; //A
    digitalWrite(3,1 ) ; // B
    digitalWrite(4,1 ) ; //C
    digitalWrite(5,0 ) ; // D
    digitalWrite(6,0 ) ; // E
    digitalWrite(7,0 ) ; //F
    digitalWrite(8,0 ) ; //G
    delay(retardo); 
       //2
      digitalWrite(2,1 ) ; //A
    digitalWrite(3,1 ) ; // B
    digitalWrite(4,0 ) ; //C
    digitalWrite(5,1 ) ; // D
    digitalWrite(6,1 ) ; // E
    digitalWrite(7,0 ) ; //F
    digitalWrite(8,1 ) ; //G
    delay(retardo); 
       //3
      digitalWrite(2,1 ) ; //A
    digitalWrite(3,1 ) ; // B
    digitalWrite(4,1 ) ; //C
    digitalWrite(5,1 ) ; // D
    digitalWrite(6,0 ) ; // E
    digitalWrite(7,0 ) ; //F
    digitalWrite(8,1 ) ; //G
    delay(retardo); 
    //4
      digitalWrite(2,0 ) ; //A
    digitalWrite(3,1 ) ; // B
    digitalWrite(4,1 ) ; //C
    digitalWrite(5,0 ) ; // D
    digitalWrite(6,0 ) ; // E
    digitalWrite(7,1 ) ; //F
    digitalWrite(8,1 ) ; //G
    delay(retardo); 
       //5
      digitalWrite(2,1 ) ; //A
    digitalWrite(3,0 ) ; // B
    digitalWrite(4,1 ) ; //C
    digitalWrite(5,1 ) ; // D
    digitalWrite(6,0 ) ; // E
    digitalWrite(7,1 ) ; //F
    digitalWrite(8,1 ) ; //G
    delay(retardo);
       //6
      digitalWrite(2,1 ) ; //A
    digitalWrite(3,0 ) ; // B
    digitalWrite(4,1 ) ; //C
    digitalWrite(5,1 ) ; // D
    digitalWrite(6,1 ) ; // E
    digitalWrite(7,1 ) ; //F
    digitalWrite(8,1 ) ; //G
    delay(retardo);
       //7
      digitalWrite(2,1 ) ; //A
    digitalWrite(3,1 ) ; // B
    digitalWrite(4,1 ) ; //C
    digitalWrite(5,0 ) ; // D
    digitalWrite(6,0 ) ; // E
    digitalWrite(7,0 ) ; //F
    digitalWrite(8,0 ) ; //G
    delay(retardo); 
      //8
      digitalWrite(2,1 ) ; //A
    digitalWrite(3,1 ) ; // B
    digitalWrite(4,1 ) ; //C
    digitalWrite(5,1 ) ; // D
    digitalWrite(6,1 ) ; // E
    digitalWrite(7,1 ) ; //F
    digitalWrite(8,1 ) ; //G
    delay(retardo); 
      //9
    digitalWrite(2,HIGH ) ; //A
    digitalWrite(3,HIGH ) ; // B
    digitalWrite(4,HIGH ) ; //C
    digitalWrite(5,HIGH ) ; // D
    digitalWrite(6,LOW ) ; // E
    digitalWrite(7,HIGH ) ; //F
    digitalWrite(8,HIGH ) ; //G
    delay(retardo) ;
    break ;
   }
 }
