#include "gpio.hpp"

Gpio::Gpio(const gpio_num_t gpio_num, const gpio_mode_t mode_io, const gpio_pull_mode_t pull)
{
    gpio_num_ = gpio_num;
    gpio_set_direction(gpio_num_, mode_io);
    gpio_set_pull_mode(gpio_num_, pull);
}

const gpio_level_t Gpio::getLevel()
{
    return (gpio_level_t)gpio_get_level(gpio_num_);
}

void Gpio::setLevel(const gpio_level_t level)
{
    gpio_set_level(gpio_num_, (int)level);
}