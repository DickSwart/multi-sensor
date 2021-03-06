#ifndef _USER_CONFIG_H_
#define _USER_CONFIG_H_

///////////////////////////////////////////////////////////////////////////
//   WIFI
///////////////////////////////////////////////////////////////////////////
#define WIFI_SSID "wifi_ssid"
#define WIFI_PASSWORD "wifi_password"
#define WIFI_SIGNAL_STRENGTH_OFFSET_VALUE 2
#define WIFI_SIGNAL_STRENGTH_INTERVAL 50000 // [ms]
#define WIFI_SIGNAL_STRENGTH_SENSOR_NAME "wifi"

///////////////////////////////////////////////////////////////////////////
//   MQTT
///////////////////////////////////////////////////////////////////////////
#define MQTT_SERVER "xxx.xxx.xxx.xxx"
#define MQTT_SERVER_PORT 1883
#define MQTT_USERNAME "mqtt_user_name"
#define MQTT_PASSWORD "mqtt_password"

#define MQTT_DEVICE_AVAILABILITY_TEMPLATE "multisensor/%s/state"
#define MQTT_DEVICE_COMMAND_TEMPLATE "multisensor/%s/set"
#define MQTT_SENSOR_STATE_TEMPLATE "multisensor/%s/%s/state"

#define MQTT_PAYLOAD_ON "ON"
#define MQTT_PAYLOAD_OFF "OFF"
#define MQTT_PAYLOAD_AVAILABLE "online"
#define MQTT_PAYLOAD_NOT_AVAILABLE "offline"

// Message text for device commands
#define MQTT_CMD_RESET "reset"           // command that resets the device
#define MQTT_CMD_STATE "state"           // command to resend all state

///////////////////////////////////////////////////////////////////////////
//   DOOR SENSOR
///////////////////////////////////////////////////////////////////////////
#define DOOR_SENSOR_NAME "door"
#define DOOR_PIN D2

///////////////////////////////////////////////////////////////////////////
//   MOTION SENSOR
///////////////////////////////////////////////////////////////////////////
#define PIR_SENSOR_NAME "motion"
#define PIR_SENSOR_PIN D5

///////////////////////////////////////////////////////////////////////////
//   DHT SENSOR PINS
//   - Temperature and humidity sensor (DHT22)
///////////////////////////////////////////////////////////////////////////
#define DHT_TEMPERATURE_SENSOR_NAME "temperature"
#define DHT_HUMIDITY_SENSOR_NAME "humidity"
#define DHT_REALFEEL_SENSOR_NAME "realfeel"
#define DHT_PIN D6

///////////////////////////////////////////////////////////////////////////
//   LUMINANCE SENSOR
///////////////////////////////////////////////////////////////////////////
#define LDR_SENSOR_NAME "lux"
#define LDR_PIN A0

///////////////////////////////////////////////////////////////////////////
//   Over-the-Air update (OTA)
///////////////////////////////////////////////////////////////////////////
#define OTA_HOSTNAME_TEMPLATE "Bathroom: MultiSensor"
#define OTA_PORT 8266 // port 8266 by default

#endif // _USER_CONFIG_H_