/*
 * Pins.h - GPIO pin definitions and initialization
 */

#ifndef PINS_H
#define PINS_H

#include <Arduino.h>

// ============ I2C OLED ============
#define PIN_SDA        8
#define PIN_SCL        9
#define OLED_ADDRESS   0x3C

// ============ BUTTONS ============
#define PIN_BTN_UP     2
#define PIN_BTN_DOWN   3
#define PIN_BTN_LEFT   4
#define PIN_BTN_RIGHT  5
#define PIN_BTN_OK     6
#define PIN_BTN_BACK   7
#define PIN_BTN_START  20
#define PIN_BTN_RESET  21

#define BTN_NONE       255
#define BTN_UP         0
#define BTN_DOWN       1
#define BTN_LEFT       2
#define BTN_RIGHT      3
#define BTN_OK         4
#define BTN_BACK       5
#define BTN_START      6
#define BTN_RESET      7

// ============ AUDIO ============
#define PIN_BUZZER     10

// ============ INDICATORS ============
#define PIN_LED_POWER  19

// ============ PIN SETUP FUNCTION ============
inline void initPins() {
  // Button inputs
  pinMode(PIN_BTN_UP, INPUT_PULLUP);
  pinMode(PIN_BTN_DOWN, INPUT_PULLUP);
  pinMode(PIN_BTN_LEFT, INPUT_PULLUP);
  pinMode(PIN_BTN_RIGHT, INPUT_PULLUP);
  pinMode(PIN_BTN_OK, INPUT_PULLUP);
  pinMode(PIN_BTN_BACK, INPUT_PULLUP);
  pinMode(PIN_BTN_START, INPUT_PULLUP);
  pinMode(PIN_BTN_RESET, INPUT_PULLUP);
  
  // Buzzer output
  pinMode(PIN_BUZZER, OUTPUT);
  digitalWrite(PIN_BUZZER, LOW);
  
  // Power LED output
  pinMode(PIN_LED_POWER, OUTPUT);
  digitalWrite(PIN_LED_POWER, HIGH);
}

#endif // PINS_H
