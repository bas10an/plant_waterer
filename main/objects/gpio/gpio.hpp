#include "igpio.hpp"

class Gpio : IGpio
{
public:
    Gpio(const gpio_num_t gpio_num, const gpio_mode_t mode_io, const gpio_pull_mode_t pull);
    const gpio_level_t getLevel();
    void setLevel(const gpio_level_t level);
};