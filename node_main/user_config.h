


#define ACCESS_TOKEN                "123456"

#define SMARTCONFIG_KEY             13
#define STATUS_LED                  0
#ifndef NODE_NAME
#define NODE_NAME                   "esp8266_node_1"
#endif
#define SERVER_IP                   { 192, 168, 18, 148}
#define SERVER_PORT                 8000
#define OTA_SERVER_IP               { 192, 168, 18, 148 }
#define OTA_SERVER_PORT             80
#ifndef OTA_SERVER_URL_PREFIX
#define OTA_SERVER_URL_PREFIX       "/v1"
#endif

#define ENABLE_DEBUG_ON_UART1       1

/* eeprom slots */
#define EEP_OFFSET_KEY              0
#define EEP_OFFSET_SN               100