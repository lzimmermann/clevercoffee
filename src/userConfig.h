/**
 * @file    userConfig.h
 * @brief   Values must be configured by the user / larsz
 * @version 4.0.0 Master
 *
 */

#pragma once

// firmware version (must match with definitions in the main source file)
#define USR_FW_VERSION    4
#define USR_FW_SUBVERSION 0
#define USR_FW_HOTFIX     0
#define USR_FW_BRANCH     "LARSZ"

/**
 * Preconfiguration
 */

// Display
#define OLED_DISPLAY    2       // 0 = deactivated, 1 = SH1106 (e.g. 1.3 "128x64), 2 = SSD1306 (e.g. 0.96" 128x64), 3 = SH1106_126x64_SPI
#define OLED_I2C        0x3C    // I2C address for OLED, 0x3C by default
#define DISPLAYTEMPLATE 3       // 1 = Standard display template, 2 = Minimal template, 3 = only temperature, 4 = scale template, 20 = vertical display (see git Handbook for further information)
#define DISPLAYROTATE   U8G2_R0 // rotate display clockwise: U8G2_R0 = no rotation; U8G2_R1 = 90°; U8G2_R2 = 180°; U8G2_R3 = 270°
#define SCREEN_WIDTH    128     // OLED display width, in pixels
#define SCREEN_HEIGHT   64      // OLED display height, in pixels

#define LANGUAGE 0              // LANGUAGE = 0 (DE), LANGUAGE = 1 (EN), LANGUAGE = 2 (ES)

// Connectivity
#define CONNECTMODE         1              // 0 = offline 1 = WIFI-MODE
#define HOSTNAME            "ECM"
#define PASS                "123..qwe" // default password for WiFiManager
#define MAXWIFIRECONNECTS   5              // maximum number of reconnection attempts, use -1 to deactivate
#define WIFICONNECTIONDELAY 10000          // delay between reconnects in ms

// PID & Hardware
#define FEATURE_POWERSWITCH     0                       // 0 = deactivated, 1 = activated
#define POWERSWITCH_TYPE        Switch::TOGGLE          // Switch::TOGGLE or Switch::MOMENTARY (trigger)
#define POWERSWITCH_MODE        Switch::NORMALLY_OPEN   // Switch::NORMALLY_OPEN or Switch::NORMALLY_CLOSED
#define FEATURE_BREWSWITCH      1                       // 0 = deactivated, 1 = activated
#define BREWSWITCH_TYPE         Switch::TOGGLE          // Switch::TOGGLE or Switch::MOMENTARY (trigger)
#define BREWSWITCH_MODE         Switch::NORMALLY_CLOSED // Switch::NORMALLY_OPEN or Switch::NORMALLY_CLOSED
#define FEATURE_STEAMSWITCH     0                       // 0 = deactivated, 1 = activated
#define STEAMSWITCH_TYPE        Switch::TOGGLE          // Switch::TOGGLE or Switch::MOMENTARY (trigger)
#define STEAMSWITCH_MODE        Switch::NORMALLY_OPEN   // Switch::NORMALLY_OPEN or Switch::NORMALLY_CLOSED
#define HEATER_SSR_TYPE         Relay::HIGH_TRIGGER     // HIGH_TRIGGER = relay switches when input is HIGH, vice versa for LOW_TRIGGER
#define PUMP_VALVE_SSR_TYPE     Relay::HIGH_TRIGGER     // HIGH_TRIGGER = relay switches when input is HIGH, vice versa for LOW_TRIGGER
#define FEATURE_STATUS_LED      2                       // Blink status LED when temp is in range, 0 = deactivated, 1 = activated, 2 = activated inverted
#define FEATURE_BREW_LED        2                       // Turn on brew LED when brew is started, 0 = deactivated, 1 = activated, 2 = activated inverted
#define FEATURE_STEAM_LED       1                       // Turn on steam LED when switch is started, 0 = deactivated, 1 = activated, 2 = activated inverted. Only use steam LED if not using USB monitoring
#define LED_TYPE                LED::STANDARD           // STANDARD_LED for an LED connected to a GPIO pin, WS2812 for adressable LEDs
#define FEATURE_WATERTANKSENSOR 0                       // 0 = deactivated, 1 = activated
#define WATERTANKSENSOR_TYPE    Switch::NORMALLY_CLOSED // Switch::NORMALLY_CLOSED for sensor XKC-Y25-NPN or Switch::NORMALLY_OPEN for XKC-Y25-PNP

#define FEATURE_PRESSURESENSOR  0                        // 0 = deactivated, 1 = activated


// Brew Scale
#define FEATURE_SCALE 0 // 0 = deactivated, 1 = activated
#define SCALE_TYPE    0 // 0 = one HX711 per load cell, 1 = Only a single HX711 with two channels
#define SCALE_SAMPLES 2 // Load cell sample rate

// PlatformIO OTA
#define OTA     true      // true = OTA activated, false = OTA deactivated
#define OTAPASS "otapass" // Password for OTA updates

// MQTT
#define FEATURE_MQTT                 1                 // 0 = deactivated, 1 = activated
#define MQTT_USERNAME                "JYaTzKFR3v"
#define MQTT_PASSWORD                "FergKkk1AoR5qLMfW0Q7qtkN"
#define MQTT_TOPIC_PREFIX            "Espresso_"   // topic will be "<MQTT_TOPIC_PREFIX><HOSTNAME><Last4DigitsOfMAC>/<READING>/"
#define MQTT_SERVER_IP               "192.168.178.70" // IP-Address of the MQTT Server
#define MQTT_SERVER_PORT             1887              // Port of the specified MQTT Server
#define MQTT_HASSIO_SUPPORT          0                 // Enables the Homeassistant Auto Discovery Feature
#define MQTT_HASSIO_DISCOVERY_PREFIX "homeassistant"   // Homeassistant Auto Discovery Prefix
#define MQTT_INTERVAL_MS 300

// PID Parameters (not yet in Web interface)
#define EMA_FACTOR 0.6 // Smoothing of input that is used for Tv (derivative component of PID). Smaller means less smoothing but also less delay, 0 means no filtering

#define TEMP_SENSOR 2  // Temp sensor type: 1 = DS18B20, 2 = TSIC306

#define FEATURE_TEMP_SENSOR_2   0                       // 0 = deactivated, 1 = activated
#define TEMP_SENSOR_2 1  // Temp sensor type: 1 = DS18B20, 2 = TSIC306

// Log level for serial console, valid options (all with Logger::Level:: prefix) are:
// TRACE, DEBUG, INFO, WARNING, ERROR, FATAL
#define LOGLEVEL Logger::Level::DEBUG






