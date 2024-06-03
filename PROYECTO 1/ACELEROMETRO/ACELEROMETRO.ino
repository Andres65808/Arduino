#include "I2Cdev.h"
#include "MPU6050.h"
#include "Wire.h"
#include <SPI.h>
#include <RH_NRF24.h>
//-------------------------------------------------------------------------------------------------------
MPU6050 sensor;
RH_NRF24 nrf24;
int ax, ay, az;
int CASE;

const int numReadings = 10; // Número de lecturas a promediar
int readingsX[numReadings];  // Array para almacenar las últimas lecturas en X
int index = 0;               // Índice actual en el array de lecturas
int totalX = 0; 

const int numReadingsY = 10; // Número de lecturas a promediar
int readingsY[numReadingsY];  // Array para almacenar las últimas lecturas en X
int indexy = 0;               // Índice actual en el array de lecturas
int totalY = 0;
//-------------------------------------------------------------------------------------------------------
void setup() 
{
  Serial.begin(9600);   
  Wire.begin();           
  sensor.initialize();
  if (sensor.testConnection()) Serial.println("Sensor iniciado correctamente");
  else Serial.println("Error al iniciar el sensor");

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
  // Obtener valores
  sensor.getAcceleration(&ax, &ay, &az);
  ax = ax/500;
  ay = ay/500;
 
  // Agregar la nueva lectura al totalX
  totalX = totalX - readingsX[index] + ax;
  // Guardar la nueva lectura en el array
  readingsX[index] = ax;
  index = (index + 1) % numReadings;
  // Calcular el valor promedio en X
  float x = totalX / (float)numReadings;

  // Agregar la nueva lectura al totaly
  totalY = totalY - readingsY[indexy] + ay;
  // Guardar la nueva lectura en el array
  readingsY[indexy] = ay;
  indexy = (indexy + 1) % numReadingsY;
  // Calcular el valor promedio en X
  float y = totalY / (float)numReadingsY;
//------------------------------------------------------------------------------------------------    
  Serial.print("X:");
  Serial.print(x);
  Serial.print("\t");
  Serial.print("Y:");
  Serial.print(y);
  Serial.println();

  if (x >= 20) 
  {
    CASE = 1;       
  } 
  else if (x <= -20) 
  {
    CASE = 2; 
  } 
  else if (y >= 20) 
  {
    CASE = 3; 
  }
  else if (y <= -20) 
  {
    CASE = 4; 
  }
  else
  {
    CASE = 0;
  }
//------------------------------------------------------------------------------------------------

int btn = CASE;
String dat = String(btn);
static char *datos = dat.c_str();
nrf24.send((uint8_t *)datos, strlen(datos));
nrf24.waitPacketSent();
Serial.println(btn);
delay(10);
}
