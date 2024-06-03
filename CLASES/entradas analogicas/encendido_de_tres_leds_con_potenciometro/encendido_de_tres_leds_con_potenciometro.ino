void setup() 
{
 for ( int x = 2 ; x<= 5 ; x++ ) 
 pinMode(x, OUTPUT) ;
}
void loop() 
{
  int analog = analogRead(A0) ;
  if (analog >0 && analog <340)
  {
    digitalWrite(2,1) ;
    digitalWrite(3,0) ;
    digitalWrite(4,0) ;
  }
  if (analog >341 && analog <680)
  {
    digitalWrite(2,0) ;
    digitalWrite(3,1) ;
    digitalWrite(4,0) ;
  }
  if (analog >681 && analog <1024)
  {
    digitalWrite(2,0) ;
    digitalWrite(3,0) ;
    digitalWrite(4,1) ;
  }
}
