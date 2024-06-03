int retardo = 100;
int sw2,sw3,sw4 ;
void setup() 
{
  for(int x= 13 ; x>=5 ; x--)
  {
    pinMode(x,OUTPUT);
  }
  for(int x= 4 ; x>=2 ; x--)
  {
    pinMode(x,INPUT);
  }
}

void loop() 
{
sw2 = digitalRead(2);
sw3 = digitalRead(3);
sw4 = digitalRead(4);
  if ( sw4 ==0 && sw3==0 && sw2 ==0) 
  {
    for(int x= 13 ; x>=5 ; x--)
    {
      digitalWrite(x,0);
    }
  }

  if ( sw4 ==0 && sw3==0 && sw2 ==1) 
  {
    for(int x=13 ; x>=5 ; x--)
    {
     digitalWrite(x,1);
     delay(retardo);
     digitalWrite(x,0);
    }
  }
  
  if ( sw4 ==0 && sw3==1 && sw2 ==0) 
  {
    for(int x=5 ; x<=13 ; x++)
    {
     digitalWrite(x,1);
     delay(retardo);
     digitalWrite(x,0);
    }
  }
  
  if ( sw4 ==1 && sw3==0 && sw2 ==0) 
  {
   for(int x= 3 ; x<= 13 ; x++)
   {
     digitalWrite(x, HIGH);
     delay(retardo);
     digitalWrite(x, LOW);
   }
   for(int x = 13 ; x>4 ; x--)
   {
     digitalWrite(x, HIGH);
     delay(retardo);
     digitalWrite(x,LOW);
   }
  
  }
  
  if ( sw4 ==1 && sw3==1 && sw2 == 1) 
  {
    for(int x=5 ; x<=13 ; x++)
    {
       digitalWrite(x,1);
    }
  }
}
