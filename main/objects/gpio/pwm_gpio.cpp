#include "pwm_gpio.hpp"

PwmGpio::PwmGpio(const int gpio_num, ledc_timer_t timer, ledc_channel_t channel)
{
    timer_config_.clk_cfg = LEDC_USE_APB_CLK;
    timer_config_.duty_resolution = LEDC_TIMER_10_BIT;
    timer_config_.freq_hz = 1000;
    timer_config_.speed_mode = LEDC_HIGH_SPEED_MODE;
    timer_config_.timer_num = timer;
    
    channel_config_.channel = channel;
    channel_config_.gpio_num = gpio_num;
    channel_config_.speed_mode = timer_config_.speed_mode;
    channel_config_.timer_sel = timer_config_.timer_num;

    ESP_ERROR_CHECK(ledc_timer_config(&timer_config_));
    ESP_ERROR_CHECK(ledc_channel_config(&channel_config_));
    ESP_ERROR_CHECK(ledc_stop(timer_config_.speed_mode, channel_config_.channel, 0));
}

void PwmGpio::setFrequency(const uint32_t frequency_hz)
{
    if (frequency_hz > 80000000)
    {
        ESP_LOGW(__func__, "Warning: Frequency setting too high. Changed to 80 MHz");
        timer_config_.freq_hz = 80000000;
    }
    else if (frequency_hz < 1000)
    {
        timer_config_.speed_mode = LEDC_LOW_SPEED_MODE;
        timer_config_.freq_hz = frequency_hz;
    }
    else
    {
        timer_config_.freq_hz = frequency_hz;
    }
}

void PwmGpio::setDutyCycle(const uint16_t high_percentage)
{
    if (high_percentage > 100)
    {
        ESP_LOGW(__func__, "Warning: Duty cycle high percentage setting too high. Changed to 100 percent");
        ESP_ERROR_CHECK(ledc_set_duty(timer_config_.speed_mode, channel_config_.channel, 1024 - 1));
    }
    else
    {
        int duty_cycle = (((high_percentage - 0) * 1024) / 100) + 0;
        ESP_ERROR_CHECK(ledc_set_duty(timer_config_.speed_mode, channel_config_.channel, duty_cycle));
    }
}

void PwmGpio::startPWM()
{
    ESP_ERROR_CHECK(ledc_update_duty(timer_config_.speed_mode, channel_config_.channel));
    ESP_ERROR_CHECK(ledc_timer_resume(timer_config_.speed_mode, timer_config_.timer_num));
    ESP_ERROR_CHECK(ledc_timer_config(&timer_config_));
    ESP_ERROR_CHECK(ledc_channel_config(&channel_config_));
}

void PwmGpio::startPWMWithSettings(const uint32_t frequency_hz, const uint16_t high_percentage)
{
    setFrequency(frequency_hz);
    setDutyCycle(high_percentage);
    startPWM();
}

void PwmGpio::stopPWM()
{
    ESP_ERROR_CHECK(ledc_stop(timer_config_.speed_mode, channel_config_.channel, 0));
}