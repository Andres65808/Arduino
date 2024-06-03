int btn1; int btn2; int pot;
void setup() {
pinMode(2, INPUT); //btn1
pinMode(3, INPUT); //btn2
pinMode(A0, INPUT); //pot
pinMode(4, OUTPUT); //salida1
pinMode(5, OUTPUT); //salida2
pinMode(6, OUTPUT); //velocidad
}
void loop()
{
  pot = analogRead(A0);
  pot = map ( pot, 0,1023,0,255);
  btn1 = digitalRead(2);
  btn2 = digitalRead(3);
  if (btn1 == 1)
  {
    digitalWrite(4,1);
    digitalWrite(5,0);
    analogWrite(6,pot);
  }
  else if (btn2 ==1)
  {
    digitalWrite(4,0);
    digitalWrite(5,1); 
    analogWrite(6,pot); 
  }
  else if (btn1 == 0 && btn2 == 0 )
  {
    digitalWrite(4,0);
    digitalWrite(5,0); 
  }
}
