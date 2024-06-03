int btn1; int btn2; int pot;
void setup() {
pinMode(2, INPUT);
pinMode(3, INPUT);
pinMode(A0, INPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);
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
