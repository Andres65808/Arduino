int sw1;
void setup()
{
  for(int i = 2; i<= 9;i++)
  {
    pinMode(i, OUTPUT);
    pinMode(A1,INPUT);
  }
}
void loop() 
{
  int retardo = analogRead(A1) ;
  //9
  digitalWrite(2,HIGH ); //A
  digitalWrite(3,HIGH ); //B
  digitalWrite(4,HIGH ); //C
  digitalWrite(5,HIGH ); //D
  digitalWrite(6,LOW ) ; //E
  digitalWrite(7,HIGH ); //F
  digitalWrite(8,HIGH ); //G
  delay(retardo) ;
  retardo = analogRead(A1) ;
  //8
  digitalWrite(2,1 ) ; //A
  digitalWrite(3,1 ) ; // B
  digitalWrite(4,1 ) ; //C
  digitalWrite(5,1 ) ; // D
  digitalWrite(6,1 ) ; // E
  digitalWrite(7,1 ) ; //F
  digitalWrite(8,1 ) ; //G
  delay(retardo); 
  retardo = analogRead(A1) ;
  //7
  digitalWrite(2,1 ) ; //A
  digitalWrite(3,1 ) ; // B
  digitalWrite(4,1 ) ; //C
  digitalWrite(5,0 ) ; // D
  digitalWrite(6,0 ) ; // E
  digitalWrite(7,0 ) ; //F
  digitalWrite(8,0 ) ; //G
  delay(retardo); 
  retardo = analogRead(A1) ;
  //6
  digitalWrite(2,1 ) ; //A
  digitalWrite(3,0 ) ; // B
  digitalWrite(4,1 ) ; //C
  digitalWrite(5,1 ) ; // D
  digitalWrite(6,1 ) ; // E
  digitalWrite(7,1 ) ; //F
  digitalWrite(8,1 ) ; //G
  delay(retardo); 
  retardo = analogRead(A1) ;
  //5
  digitalWrite(2,1 ) ; //A
  digitalWrite(3,0 ) ; // B
  digitalWrite(4,1 ) ; //C
  digitalWrite(5,1 ) ; // D
  digitalWrite(6,0 ) ; // E
  digitalWrite(7,1 ) ; //F
  digitalWrite(8,1 ) ; //G
  delay(retardo); 
  retardo = analogRead(A1) ;
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
  retardo = analogRead(A1) ;
  //2
  digitalWrite(2,1 ) ; //A
  digitalWrite(3,1 ) ; // B
  digitalWrite(4,0 ) ; //C
  digitalWrite(5,1 ) ; // D
  digitalWrite(6,1 ) ; // E
  digitalWrite(7,0 ) ; //F
  digitalWrite(8,1 ) ; //G
  delay(retardo); 
  retardo = analogRead(A1) ;
  //1
  digitalWrite(2,0 ) ; //A
  digitalWrite(3,1 ) ; // B
  digitalWrite(4,1 ) ; //C
  digitalWrite(5,0 ) ; // D
  digitalWrite(6,0 ) ; // E
  digitalWrite(7,0 ) ; //F
  digitalWrite(8,0 ) ; //G
  delay(retardo); 
  retardo = analogRead(A1) ;
  //0
  digitalWrite(2,1 ) ; //A
  digitalWrite(3,1 ) ; // B
  digitalWrite(4,1 ) ; //C
  digitalWrite(5,1 ) ; // D
  digitalWrite(6,1 ) ; // E
  digitalWrite(7,1 ) ; //F
  digitalWrite(8,0 ) ; //G
  delay(retardo); 
  retardo = analogRead(A1) ;
}
