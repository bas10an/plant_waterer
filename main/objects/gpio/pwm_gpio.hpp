#include "igpio.hpp"
#include "stdint.h"
#include "esp_log.h"
#include "driver/ledc.h"

class PwmGpio
{
public:
    PwmGpio(const int gpio_num, ledc_timer_t timer, ledc_channel_t channel);
    void setFrequency(const uint32_t frequency_hz);
    void setDutyCycle(const uint16_t high_percentage);
    void startPWM();
    void startPWMWithSettings(const uint32_t frequency_hz, const uint16_t high_percentage);
    void stopPWM();

private:
    ledc_timer_config_t timer_config_;
    ledc_channel_config_t channel_config_;
};