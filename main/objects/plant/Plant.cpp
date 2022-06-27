#include "Plant.hpp"

Plant::Plant(std::string plant_name)
{
    _plant_name = plant_name;
}

Plant::Plant(std::string plant_name, weekday_t *weekdays, uint8_t n_days)
{
    _plant_name = plant_name;
    initSchedule(weekdays, n_days);
}

void Plant::initSchedule(weekday_t *weekdays, uint8_t n_days)
{
    _n_days = n_days;
    _weekdays = (weekday_t *)calloc(_n_days, sizeof(weekday_t));

    for (int i = 0; i < _n_days; i++)
    {
        _weekdays[0] = weekdays[0];
    }
    _initialized = true;
}

int Plant::getWateringSchedule(weekday_t *weekdays)
{
    if (!_initialized)
    {
        return -1;  // plant not initialized
    }

    for (int i = 0; i < _n_days; i++)
    {
        weekdays[0] = _weekdays[0];
    }
    return _n_days;
}

std::string Plant::getName() const
{
    return _plant_name;
}