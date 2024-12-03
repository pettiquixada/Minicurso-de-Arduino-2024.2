#include "DHT
#define dhtpin A1      // pino que estamos conectado
#define dhttype DHT11  // DHT 11

DHT dht(dhtpin, dhttype);

void setup() 
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  float h = dht.readHumidity();
  float t = dht.readTemperature();

  Serial.print("Umidade: ");
  Serial.print(h);
  Serial.print("% ");
  Serial.print("Temperatura: ");
  Serial.print(t);
  Serial.println("°C");

  delay(2000);
}
