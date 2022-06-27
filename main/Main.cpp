#include <stdio.h>
#include "objects/plant/Plant.hpp"
#include "objects/wi-fi/WiFiStation.hpp"
#include "driver/gpio.h"
#include "hal/gpio_types.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"

#include "objects/gpio/pwm_gpio.hpp"

static void testPWM()
{
    ESP_LOGI(__func__, "Creating object\n");
    PwmGpio pwmG16(16, LEDC_TIMER_0, LEDC_CHANNEL_0);
    vTaskDelay((TickType_t)2000/portTICK_PERIOD_MS);

    ESP_LOGI(__func__, "Setting Freq\n");
    pwmG16.setFrequency(5000);
    vTaskDelay((TickType_t)1000/portTICK_PERIOD_MS);

    ESP_LOGI(__func__, "Setting DC\n");
    pwmG16.setDutyCycle(75);
    vTaskDelay((TickType_t)1000/portTICK_PERIOD_MS);

    ESP_LOGI(__func__, "Starting PWM\n");
    pwmG16.startPWM();
    vTaskDelay((TickType_t)3000/portTICK_PERIOD_MS);

    ESP_LOGI(__func__, "Stopping PWM\n");
    pwmG16.stopPWM();
    vTaskDelay((TickType_t)2000/portTICK_PERIOD_MS);

    ESP_LOGI(__func__, "Starting PWM with settings\n");
    pwmG16.startPWMWithSettings(1000, 25);
    vTaskDelay((TickType_t)3000/portTICK_PERIOD_MS);

    ESP_LOGI(__func__, "Stopping PWM\n");
    pwmG16.stopPWM();
    vTaskDelay((TickType_t)2000/portTICK_PERIOD_MS);
}

extern "C" void app_main(void)
{
    // WiFiStation wifiStation("Velkommen-5G", "Stochholm97");
    // wifiStation.init();

    // weekday_t weekday[] = {MONDAY, THURSDAY, SATURDAY};
    // Plant plant("FreckleMan", weekday, 3);

    testPWM();
}
