//instalamos las librerias para poder obtener los valores de termperatura y humedad del sensor
#include <DHT.h>
#include <DHT_U.h>

#include <Adafruit_Sensor.h>
//declaramos las variables
int led = 13;
int sensor = 2;
int temperatura;
int humedad;

//Crea un objeto dht de la clase DHT que representa el sensor, especificando el pin  y el tipo de sensor.
DHT dht (sensor, DHT11);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);//inicia la comunicacion serial
  dht.begin();//inicializa el sensor
  pinMode(led, OUTPUT);//salida de datos
}

void loop() {
  // put your main code here, to run repeatedly:
  temperatura = dht.readTemperature();//lee la temperatura 
  humedad = dht.readHumidity();//lee la humedad 
 
  Serial.print("Temperatura: ");//imprime el texto en consola "Temperatura:"
  Serial.print(temperatura); //mostrara el valor de la temperatura
  Serial.print("Humedad: ");//imprime el texto en consola "Humedad: "
  Serial.println(humedad);//mostrara el valor de la humedad
  delay(500);

  //indica que si la temperatura es igual o mayor a 28 grados el led se encendera
  if (temperatura >= 28){
    digitalWrite (led, HIGH);
  }
}
