#include <Arduino.h>

void setup() {
    Serial.begin(115200);
    Serial.println("ESP32 iniciado correctamente");
}

void loop() {
    Serial.println("Hola desde PlatformIO");
    delay(1000);
}