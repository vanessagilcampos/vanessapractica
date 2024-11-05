//libreria para utilizar la pantalla LCD
#include <LiquidCrystal.h>

// Pines de conexión para el LCD (modo de 4 bits)
const int rs = 7, en = 6, d4 = 5, d5 = 4, d6 = 1, d7 = 0;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

//definimos los pines para el sensor ultrasonico
int trigPin = 10; 
int echoPin = 9;   

//declaramos variables
int ledPin = 12;  
int ledPin1 = 11;
int ledPin2 = 13;
int ledPin3 = 8; 
int ledPin4 = 3; 
int ledPin5 = 2; 

//declaramos variables de duracion y distancia
long duracion;
int distancia;

void setup() {

 //definimos los pines de entrada y de salida
  pinMode(trigPin, OUTPUT);  //salida
  pinMode(echoPin, INPUT);   //entrada
  pinMode(ledPin, OUTPUT);  //salida
  
    lcd.begin(16, 2); //indicamos el tamaño de la pantalla
  
  Serial.begin(9600);
}

void loop() {
 //se realiza la medicion de la distancia en donde envia un pulso alto de 10 microsegundos
 //en el pin trigPin para iniciar la medicion y vuelve a poner trigPin en bajo
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Leer la duración del eco
  duracion = pulseIn(echoPin, HIGH);
  distancia = duracion * 0.034 / 2; //convierte el tiempo en distancia utilizando la velocidad del sonido en el aire

  // Mostrar la distancia en el monitor serial
  Serial.print("Distancia: ");
  Serial.print(distancia);
  Serial.println(" cm");

  // Mostrar la distancia en el LCD
  lcd.clear();
  lcd.setCursor(0, 0);  
  lcd.print("El objeto a:");
  lcd.setCursor(0, 1);  
  lcd.print(distancia);
  lcd.print(" cm");

 //apagamos todos los leds
  digitalWrite(ledPin, LOW);
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);

 //definimos que un led se encienda a diferentes distancias
  if (distancia >= 40) {
    digitalWrite(ledPin, HIGH); 

  } else if (distancia >= 30) {
    digitalWrite(ledPin1, HIGH); 

  } else if (distancia >= 25) {
    digitalWrite(ledPin2, HIGH); 

  } else if (distancia >= 15){
    digitalWrite(ledPin3, HIGH);

  } else if (distancia >= 10){
    digitalWrite(ledPin4, HIGH);

  } else if (distancia >= 5){
    digitalWrite(ledPin5, HIGH);
  }

  delay(500); 
}



