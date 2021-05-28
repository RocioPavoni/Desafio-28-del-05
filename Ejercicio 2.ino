//Ejercicio 2Teniendo la función loop() vacía, 
//cuando se ingresen datos, se deberá mostrar por el 
 //puerto serial la cantidad de caracteres ingresados.
void setup() {
Serial.begin(9600);
}

void loop() {
}

void serialEvent() { 
 String lectura = Serial.readString(); /
     Serial.print("Se ingreso ");
      Serial.print(lectura);
  
     Serial.print(" con una longitud de ");
     Serial.print(lectura.length());
     Serial.println(" caracteres.");
}
