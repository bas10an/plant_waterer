#pragma once
#include "driver/gpio.h"
#include "hal/gpio_types.h"

typedef enum gpio_level
{
    LOW = 0,
    HIGH = 1,
} gpio_level_t;

class IGpio
{
public:

protected:
    gpio_num_t gpio_num_;
};