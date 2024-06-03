#include <LiquidCrystal.h>
LiquidCrystal lcd(7, 6, 5, 4, 3 ,2 );
void setup() 
{
 pinMode(A0, INPUT);
}

void loop()
{ 
  if(Serial.available())
  {
    lcd.display();
    char webos = Serial.read();
    if(webos == '1')
    {
      lcd.clear();
      for(int x = 1; x<=10; x--)
      {
        float omaga = analogRead(A0);
        lcd.setCursor(4, 0);
        lcd.print("equipo 7");
        lcd.setCursor(0, 1);
        lcd.print("valor:");
        lcd.print(omaga);
        webos = Serial.read();
        if(webos == '2'||webos == '3'||webos == '4'||webos == '5')
        {break;}
      }
    }
    if(webos == '4')
    {
      lcd.clear();
      for(int x = 1; x<=10; x--)
      {
        lcd.setCursor(0, 0);
        lcd.print("Bulldogs");
        lcd.scrollDisplayRight();
        delay(1000);
        webos = Serial.read();
        if(webos == '1'||webos == '2'||webos == '3'||webos == '5')
        {break;}
      }
    }
    if(webos == '5')
    {
      lcd.clear();
      for(int x = 1; x<=10; x--)
      {
        lcd.setCursor(4, 0);
        lcd.print("Bulldogs");
        lcd.display();
        delay(1000);
        lcd.noDisplay();
        delay(1000);
        webos = Serial.read();
        if(webos == '1'||webos == '2'||webos == '3'||webos == '4')
        {break;}
      }
    }
    if(webos == '2')
    {
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("cbtis122");
    }
    if(webos == '3')
    {
      lcd.clear();
      lcd.setCursor(4, 0);
      lcd.print("Cbtis122");
      lcd.setCursor(3, 1);
      lcd.print("Mecatronica");
    }
  }
}
