#include <LiquidCrystal.h>

// declaramos variables
int trig = 10;
int echo = 13;
int led = 8;
int duracion;
int distancia;

LiquidCrystal lcd(7, 6, 5, 4, 3, 2);

void setup() {
  Serial.begin(9600);       // inicia la comunicacion
  lcd.begin(16, 2);         // especificamos el tamaño de la pantalla
  pinMode(trig, OUTPUT);    // el trig tendra datos de salida
  pinMode(echo, INPUT);     // el echo recibira datos
  pinMode(led, OUTPUT);     //el led tendra datos de salida
  lcd.print("Distancia:");  // muestra el texto "Distancia:" en la primera línea del LCD
}

void loop() {
  // activa el sensor ultrasónico
  digitalWrite(trig, HIGH);
  delay(100);
  digitalWrite(trig, LOW);
  
  // calcula la duración y la distancia
  duracion = pulseIn(echo, HIGH);
  distancia = duracion / 58.2;
  
  // muestra la distancia 
  Serial.print("Centimetros: ");
  Serial.print(distancia);
  Serial.println();
  
  //muestra la distancia en el LCD
  lcd.print(distancia);     // muestra la distancia
  lcd.print(" cm");        
  
  delay(200);
  
//indicamos que se encienda el led si la distancia es menor o igual a 20cm
  if(distancia <= 20) {
    digitalWrite(led, HIGH);
    delay(100);
  } else { //y apaga el led si la distancia es mayor a 20 com
    digitalWrite(led, LOW);   // Apaga el LED si la distancia es mayor a 20 cm
    delay(100);
  }
}
