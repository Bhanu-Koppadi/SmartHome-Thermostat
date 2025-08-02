#include "DHT.h"

#define DHTPIN 2         // Pin for DHT11/DHT22 data
#define DHTTYPE DHT11    // Change to DHT22 if using DHT22
#define LM35PIN A0       // Pin for LM35 output
#define LED_PIN 13       // Pin for the LED

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  delay(2000);  // Wait 2 seconds between measurements

  // Reading temperature and humidity from DHT11/DHT22
  float humidity = dht.readHumidity();
  float temperatureDHT = dht.readTemperature(); // Celsius

  // Reading temperature from LM35
  int lm35Value = analogRead(LM35PIN);
  float temperatureLM35 = (lm35Value * 5.0 * 100.0) / 1024.0; // Convert analog value to Celsius

  // Check if any reading failed
  if (isnan(humidity) || isnan(temperatureDHT)) {
    Serial.println("Failed to read from DHT sensor!");
  } else {
    // Print DHT11/DHT22 values
    Serial.print("DHT11/22 - Humidity: ");
    Serial.print(humidity);
    Serial.print(" %\t");
    Serial.print("Temperature: ");
    Serial.print(temperatureDHT);
    Serial.println(" *C");
  }

  // Print LM35 temperature value
  Serial.print("LM35 - Temperature: ");
  Serial.print(temperatureLM35);
  Serial.println(" *C");

  // If temperature > 30°C and humidity > 60%, light up the LED
  if (temperatureDHT > 30 && humidity > 60) {
    digitalWrite(LED_PIN, HIGH);
  } else {
    digitalWrite(LED_PIN, LOW);
  }
}
