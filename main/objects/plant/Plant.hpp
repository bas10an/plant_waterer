#include <string>

typedef enum weekday
{
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY,
} weekday_t;

class Plant
{
public:
    Plant(std::string plant_name);
    Plant(std::string plant_name, weekday_t *weekdays, uint8_t n_days);
    void initSchedule(weekday_t *weekdays, uint8_t n_days);
    int getWateringSchedule(weekday_t *weekdays);
    std::string getName() const;

private:
    std::string _plant_name;
    weekday_t *_weekdays;
    uint8_t _n_days;
    bool _initialized = false;
};