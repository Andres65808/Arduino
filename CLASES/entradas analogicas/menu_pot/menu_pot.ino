int sw2,sw3,sw4 ;
void setup() 
{
  for(int x= 13 ; x>=4 ; x--)
  {
    pinMode(x,OUTPUT);
  }
  for(int x= 24 ; x>=22 ; x--)
  {
    pinMode(x,INPUT);
  }
  pinMode(A1, INPUT) ;
}
void loop() 
{
  sw2 = digitalRead(22);
  sw3 = digitalRead(23);
  sw4 = digitalRead(24);
  int retardo = analogRead(A1);
  if (sw2 == 0 && sw3 == 0&& sw4 == 0)
  {
   for(int x= 13 ; x>=4 ; x--)
   {
   digitalWrite(x,0);
   }
  }
  if (sw2 == 1 && sw3 == 0&& sw4 == 0)
  {
   for(int x=13 ; x>=4 ; x--)
   {
   retardo = analogRead(A1) ;
   digitalWrite(x,1);
   delay(retardo);
   digitalWrite(x,0);
   }
  }
  if (sw2 == 1 && sw3 == 1 && sw4 == 0)
  {
    for(int x=4 ; x<=13 ; x++)
    {
     retardo = analogRead(A1) ;
     digitalWrite(x,1);
     delay(retardo);
     digitalWrite(x,0);
    }
  }
  if (sw2 == 0 && sw3 == 1 && sw4 == 1)
  {
    for (int x = 9 , y=8 ; x>=4 ; x--)
    {
     retardo = analogRead(A1) ;
     digitalWrite(x,1);
     digitalWrite(y,1);
     delay(retardo);
     digitalWrite(x,0);
     digitalWrite(y,0); 
     y++ ;
    }
  }
  if (sw2 == 1 && sw3 == 1 && sw4 == 1)
  {
    for(int x= 13 ; x>=4 ; x--)
    {
     digitalWrite(x,1);
    }
  }
}
