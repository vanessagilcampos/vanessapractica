//libreria para poder utilizar la pantalla LCD
#include <LiquidCrystal.h>
//declaramos las variables
int led = 8;
int LDR = A5;
int valor;
int limite = 700;

//inicializamos el objeto LCD con los pines que estan con el arduino conectamos al LCD
LiquidCrystal lcd(7,6,5,4,3,2);
void setup() {
Serial.begin(9600); //DONDE NOS MUESTRA LOS DATOS Y LA FECUENCIA
pinMode(LDR, INPUT);//DATOS DE ENTRADA AL PIN
pinMode(led, OUTPUT);//DE SALIDA
lcd.begin(16,2);//TAMAÑO DE LA PANTALLA
}

void loop() {
 int valor = analogRead(LDR);//de donde llegan los datos 
Serial.println(valor);//nos imprime el valor
delay(100); //ESPERA 100 MILISEGUNDOS
lcd.setCursor(2, 0);//PONE EL CURSOR EN LA POSICION 2  DEL LCD
lcd.print(valor); //MUESTRA EL VALOR
//lcd.scrollDisplayLeft();
delay (500);

 //INDICAMOS QUE SI EL VALOR ES IGUAL O MENOR AL LIMITE SE ENCIENDA EL LED 
if (valor <= limite){
digitalWrite(led, HIGH);
  delay(100);
}  
else{ //SI EL VALOR ES MAYOR AL LIMITE SE APAGUE EL LED
 digitalWrite(led, LOW);
 delay(100);
}

}
