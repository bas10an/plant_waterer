#include <stdint.h>
#include <string>
#include <cstring>

#include "nvs_flash.h"
#include "esp_wifi.h"
#include "esp_event.h"
#include "esp_system.h"
#include "esp_log.h"
#include "esp_netif.h"

#include "freertos/FreeRTOS.h"
#include "freertos/event_groups.h"

class WiFiStation
{
public:
    WiFiStation(std::string ssid, std::string password);
    void init();
    static void eventHandler(void *args, esp_event_base_t base, int32_t id, void *event_data);

private:
    const char* _ssid;
    const char* _password;
    EventGroupHandle_t _wifi_event_group;
    const int _CONNECTED_BIT = BIT0;
};