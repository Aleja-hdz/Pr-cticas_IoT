#include <DHT.h>
#include <DHT_U.h>

#include <Adafruit_Sensor.h>


int led = 12;
int SENSOR = 13;
int temperatura;
int humedad;
DHT dht (SENSOR, DHT11);

void setup() {
  Serial.begin(9600);
  dht.begin();
  pinMode(led, OUTPUT);
}

void loop() {
  temperatura = dht.readTemperature();
  humedad = dht.readHumidity();
  delay(1000);
  Serial.println("Temperatura: ");
  Serial.println(temperatura);
  Serial.println("Humedad: ");
  Serial.println(humedad);
  delay(500);

  if(temperatura >= 28){
    digitalWrite(led, HIGH);
  }
}
