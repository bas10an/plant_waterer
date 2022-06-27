#include "WiFiStation.hpp"

void WiFiStation::eventHandler(void *args, esp_event_base_t base, int32_t id, void *event_data)
{
    WiFiStation *self = (WiFiStation *)args;

    switch (id)
    {
    case WIFI_EVENT_STA_CONNECTED:
        esp_wifi_connect();
        break;

    case WIFI_EVENT_STA_DISCONNECTED:
        esp_wifi_connect();
        xEventGroupClearBits(self->_wifi_event_group, self->_CONNECTED_BIT);
        break;

    case IP_EVENT_STA_GOT_IP:
        xEventGroupSetBits(self->_wifi_event_group, self->_CONNECTED_BIT);
        break;

    default:
        break;
    }
}

WiFiStation::WiFiStation(std::string ssid, std::string password)
    : _ssid(ssid.c_str()), _password(password.c_str())
{
}

void WiFiStation::init()
{
    ESP_ERROR_CHECK(nvs_flash_init());
    ESP_ERROR_CHECK(esp_netif_init());

    _wifi_event_group = xEventGroupCreate();

    ESP_ERROR_CHECK(esp_event_handler_instance_register(WIFI_EVENT, ESP_EVENT_ANY_ID, eventHandler, this, NULL));
    ESP_ERROR_CHECK(esp_event_handler_instance_register(IP_EVENT, IP_EVENT_STA_GOT_IP, eventHandler, this, NULL));

    wifi_init_config_t cfg = WIFI_INIT_CONFIG_DEFAULT();
    ESP_ERROR_CHECK(esp_wifi_init(&cfg));
    ESP_ERROR_CHECK(esp_wifi_set_storage(WIFI_STORAGE_RAM));

    wifi_config_t wifi_config = {};
    strcpy((char *)wifi_config.sta.ssid, _ssid);
    strcpy((char *)wifi_config.sta.password, _password);

    ESP_ERROR_CHECK(esp_wifi_set_mode(WIFI_MODE_STA));
    ESP_ERROR_CHECK(esp_wifi_set_config(WIFI_IF_STA, &wifi_config));
    ESP_LOGI(__func__, "start the WIFI SSID:[%s]", wifi_config.sta.ssid);

    ESP_ERROR_CHECK(esp_wifi_start());

    ESP_LOGI(__func__, "Waiting for wifi");

    xEventGroupWaitBits(_wifi_event_group, _CONNECTED_BIT, false, true, portMAX_DELAY);
}
