#include <Arduino.h>
/**
 * @file main.ino
 * @brief Embedded Touch Detection System using TTP223
 * @author Shreya Sharma
 * @date 2026-02-20
 *
 * @details
 * Reads digital touch input from TTP223 sensor
 * and displays structured output via Serial Monitor.
 */

// TODO 1: Define touch sensor digital pin (Use pin 2)
const int TOUCH_PIN = 7;

// TODO 2: Create variable to store touch state
int touchState = 0;

void setup() {
    // TODO 3: Initialize Serial communication (9600 baud rate)
    Serial.begin(96600);

    // TODO 4: Configure touch pin as INPUT
    pinMode(TOUCH_PIN, INPUT);

    // TODO 5: Print system initialization message
    Serial.println("=== TTP223 Touch Sensor System Initialized ===");
    Serial.println("Waiting for touch input...\n");
}

void loop() {
    // TODO 6: Read digital value from touch sensor
    touchState = digitalRead(TOUCH_PIN);

    // TODO 7: If touch detected (HIGH)
    //     Print "Touch Detected"
    // Else
    //     Print "No Touch"
    if (touchState == LOW) {
        Serial.println("Touch Detected");
    } else {
        Serial.println("No Touch");
    }

    // TODO 8: Add small delay (200–500ms)
    delay(500);
}
