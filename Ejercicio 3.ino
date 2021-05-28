
void setup()
{
  Serial.begin(9600);

}

void loop()
{
  Serial.println("funcionamiento ok.");
    delay(1000); 
}

void serialEvent(){
String lectura = Serial.readString();
  
  if(lectura.equals("hola")){
Serial.println("full picado pa");
  }
}
