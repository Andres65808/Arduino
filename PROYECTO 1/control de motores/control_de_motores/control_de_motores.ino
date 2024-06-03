#include <SPI.h>
#include <RH_NRF24.h>
RH_NRF24 nrf24;
int U = 7;
int D = 6;
int R = 5;
int L = 4;
int dato = 0;
void setup()
{
  Serial.begin(9600);
  pinMode(U, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(R, OUTPUT);
  pinMode(L, OUTPUT);
  if (!nrf24.init())
    {Serial.println("fallo de inicializacion");}
  if (!nrf24.setChannel(2))
    {Serial.println("fallo en establecer canal");}
  if (!nrf24.setRF(RH_NRF24::DataRate250kbps, RH_NRF24::TransmitPower0dBm))
    {Serial.println("fallo en opciones RF");}
  Serial.println("Base iniciada");
}
 
void loop()
{
  uint8_t buf[1];
  uint8_t len = sizeof(buf);
  String dato = String((char*)buf);
  Serial.println(dato);
  if(nrf24.recv(buf, &len))
  {
    if(dato == "1")
    {
      digitalWrite(U, HIGH);  
      digitalWrite(D, LOW);
    }
    if(dato == "2")
    {
      digitalWrite(D, HIGH);
      digitalWrite(U, LOW);    
    } 
    if(dato == "3")
    {
      digitalWrite(L, HIGH);  
      digitalWrite(R, LOW);
      Serial.println("LED"); 
    }
    if(dato == "4")
    {
      digitalWrite(R, HIGH);  
      digitalWrite(L, LOW);  
    }
    if(dato == "0")
    {
      digitalWrite(D, LOW);
      digitalWrite(U, LOW); 
      digitalWrite(L, LOW); 
      digitalWrite(R, LOW);    
    }
    delay(50);
  }
}
