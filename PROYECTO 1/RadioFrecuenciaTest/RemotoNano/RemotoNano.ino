//remoto arduino nano
#include <SPI.h>
#include <RH_NRF24.h>
RH_NRF24 nrf24;
int btn;
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
  pinMode(2, INPUT);
}
void loop() 
{
btn = digitalRead(2);
String dat = String(btn);

static char *datos = dat.c_str();
nrf24.send((uint8_t *)datos, strlen(datos));
nrf24.waitPacketSent();
Serial.println(btn);
delay(1000);
}
