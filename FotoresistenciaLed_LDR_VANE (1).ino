//variables 
int LDR = A5;
int valor; //variable donde se alamcenara el valor del LDR

void setup() {
Serial.begin(9600); //DONDE NOS MUESTRA LOS DATOS Y LA FECUENCIA
pinMode(LDR, INPUT);//DE ENTRADA AL PIN
}

void loop() {
 int valor = analogRead(LDR);//de donde llegan los datos 
Serial.println(valor);//nos imprime el valor
delay(500);

}
