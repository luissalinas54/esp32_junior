#if __has_include(<Arduino.h>)
#include <Arduino.h>
#else
// Allows editor parsing when the Arduino/ESP32 SDK is not on the include path.
struct SerialFallback {
    void begin(unsigned long) {}
    void println(const char*) {}
};
static SerialFallback Serial;
static void delay(unsigned long) {}
#endif

void setup() {
    Serial.begin(115200);
}

void loop() {
    Serial.println("Hola ESP32");
    delay(1000);
} 