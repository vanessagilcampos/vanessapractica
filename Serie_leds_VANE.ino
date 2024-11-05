//se declaran las variables con los que se idetificaran los diferentes leds
int verde = 13;
int amarillo = 12;
int rojo = 8;
int verde2 = 7;
int rojo2 = 4;

void setup() {
  // put your setup code here, to run once:
  //se indica la salida de datos
pinMode(verde, OUTPUT);
pinMode(amarillo, OUTPUT);
pinMode(rojo, OUTPUT);
pinMode(verde2, OUTPUT);
pinMode(rojo2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //se indica que el led estara prendido durante medio segundo y despues se apagara durante medio segundo
  //sucesivamente pasando por todos los leds
digitalWrite(rojo2, HIGH);
delay(500);
digitalWrite(rojo2, LOW);
delay(500);

digitalWrite(verde, HIGH);
delay(500);
digitalWrite(verde, LOW);
delay(500);

digitalWrite(amarillo, HIGH);
delay(500);
digitalWrite(amarillo, LOW);
delay(500);

digitalWrite(rojo, HIGH);
delay(500);
digitalWrite(rojo, LOW);
delay(500);

digitalWrite(verde2, HIGH);
delay(500);
digitalWrite(verde2, LOW);
delay(500);

digitalWrite(rojo, HIGH);
delay(500);
digitalWrite(rojo, LOW);
delay(500);

digitalWrite(amarillo, HIGH);
delay(500);
digitalWrite(amarillo, LOW);
delay(500);

digitalWrite(verde, HIGH);
delay(500);
digitalWrite(verde, LOW);
delay(500);


}
