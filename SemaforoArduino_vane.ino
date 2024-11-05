// se declaran las variebles y se les da el valor del puerto digital en el que se encuentran 
 int verde = 13;
 int amarillo = 12;
 int rojo =8;

void setup() {
  // put your setup code here, to run once:
 //SEÑAL DE SALIDA DE LOS LEDS
pinMode (verde, OUTPUT); 
pinMode (amarillo, OUTPUT);
pinMode (rojo, OUTPUT);
}

void loop() {
//indicamos que el led verde se prenda durante 4 segundos 
digitalWrite(verde, HIGH);
delay(4000);
 //indicamos que el led verde se apague durante medio segundo
digitalWrite(verde, LOW);
delay(500);
 
//indicammos que el led amarillo este prendido durante 2 segundos
digitalWrite(amarillo,HIGH);
delay(2000);
 //indicamos que el led amarillo se apague durante medio segundo
digitalWrite(amarillo, LOW);
delay(500);
 //indicamos que vuelva a prender y apagar durante medio segundo
digitalWrite(amarillo,HIGH);
delay(500);
digitalWrite(amarillo, LOW);
delay(500);
digitalWrite(amarillo,HIGH);
delay(500);
digitalWrite(amarillo, LOW);
delay(500);

 //indicamos que el led rojo se prenda durante 6 segundos y que
 //despues se apague durante medio segundos
digitalWrite(rojo, HIGH);
delay(6000);
digitalWrite(rojo, LOW);
delay(500);
}
