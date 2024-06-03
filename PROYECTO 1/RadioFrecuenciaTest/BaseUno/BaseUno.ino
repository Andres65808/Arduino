//base arduino uno
#include <SPI.h>
#include <RH_NRF24.h>
RH_NRF24 nrf24;
void setup() 
{
  Serial.begin(9600);
  if (!nrf24.init())
    {Serial.println("fallo de inicializacion");}
  if (!nrf24.setChannel(2))
    {Serial.println("fallo en establecer canal");}
  if (!nrf24.setRF(RH_NRF24::DataRate250kbps, RH_NRF24::TransmitPower0dBm))
    {Serial.println("fallo en opciones RF");}
  Serial.println("Base iniciada");
  pinMode(5, OUTPUT);
}
void loop() 
{
  uint8_t buf[1];
  uint8_t len = sizeof(buf);
  if(nrf24.recv(buf, &len))
  {
    String datos = String((char*)buf);
    Serial.println("boton: ");
    Serial.println(datos);
  }
  delay(100);
}
