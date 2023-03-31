/**
 * Sensor 5v
 */

#include <Arduino.h>

#define pinOut 8

void setup() {
    Serial.begin(9600);
    pinMode(pinOut, INPUT);
}

void loop() {
    // O Sensor retorna 0 caso exista um obstáculo e 1 caso contrário
    if (digitalRead(pinOut) == 0) {
        Serial.println("Obstáculo detectado!");
    }
}