#include <Wire.h>
#include <Adafruit_MLX90614.h>
Adafruit_MLX90614 mlx = Adafruit_MLX90614();
#include <SoftwareSerial.h>


int temperatura=0;
void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
 pinMode(13, OUTPUT);
   mlx.begin();
}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.print("Ambient = "); Serial.print(mlx.readAmbientTempC());  
     Serial.print("*C\tObject = "); Serial.print(mlx.readObjectTempC()); Serial.println("*C");
     Serial.println();  
     delay(9000);

  
  if(Serial.available()=>38) //Comprobamos si en el buffer hay datos
  {
    digitalWrite(14,HIGH);
  }else(Serial.available() >38) {
    
    
    }
  
  
  if(Serial.available()>0) //Comprobamos si en el buffer hay datos
  {
    int temperatura = Serial.read();  //Lee cada carácter uno por uno y se almacena en una variable
    Serial.print(dato);  //Imprimimos en la consola el carácter recibido
  }
  
 
}
