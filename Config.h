/*
 * Config.h - Central configuration for ESP32-C3 Pomodoro Timer
 * Screen IDs, timing constants, and global settings
 */

#ifndef CONFIG_H
#define CONFIG_H

// ============ SCREEN DEFINITIONS ============
#define SCREEN_BOOT            0
#define SCREEN_MAIN_MENU       1
#define SCREEN_POMODORO        2
#define SCREEN_STOPWATCH       3
#define SCREEN_COUNTDOWN       4
#define SCREEN_NOTES_LIST      5
#define SCREEN_NOTE_EDIT       6
#define SCREEN_SETTINGS        7
#define SCREEN_STATISTICS      8
#define SCREEN_SYSTEM_INFO     9
#define SCREEN_DEVELOPER       10

// ============ TIMING CONSTANTS ============
#define DISPLAY_REFRESH_RATE   100    // ms - UI refresh rate
#define BUTTON_DEBOUNCE_MS     20     // ms - Button debounce time
#define LONG_PRESS_MS          1000   // ms - Long press threshold
#define SCREEN_TIMEOUT_DURATION 60000 // ms - 1 minute screen timeout

// ============ POMODORO DEFAULTS (seconds) ============
#define DEFAULT_WORK_DURATION     1500    // 25 minutes
#define DEFAULT_BREAK_DURATION    300     // 5 minutes
#define DEFAULT_LONG_BREAK        900     // 15 minutes
#define LONG_BREAK_AFTER_SESSIONS 4

// ============ BUZZER TONES ============
#define TONE_CLICK    500    // Hz - Navigation click
#define TONE_CONFIRM  800    // Hz - Confirmation tone
#define TONE_COMPLETE 1000   // Hz - Timer complete
#define TONE_STARTUP  1200   // Hz - Startup chime

#define DURATION_CLICK    30   // ms
#define DURATION_CONFIRM  100  // ms
#define DURATION_COMPLETE 200  // ms
#define DURATION_STARTUP  300  // ms

// ============ DISPLAY SETTINGS ============
#define SCREEN_WIDTH       128
#define SCREEN_HEIGHT      64
#define SCREEN_BUFFER_SIZE (SCREEN_WIDTH * SCREEN_HEIGHT / 8)

// ============ TEXT SETTINGS ============
#define MAX_NOTE_LENGTH    200
#define MAX_NOTES          10
#define KEYBOARD_ROWS      4
#define KEYBOARD_COLS      10

// ============ MEMORY OPTIMIZATION ============
#define USES_PROGMEM       1   // Store strings in flash
#define OPTIMIZE_RAM       1   // Aggressive RAM optimization

// ============ STORAGE ============
#define SPIFFS_PARTITION_SIZE 0x100000  // 1MB for SPIFFS

#endif // CONFIG_H
