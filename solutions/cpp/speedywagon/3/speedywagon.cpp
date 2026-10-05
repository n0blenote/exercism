#include "speedywagon.h"
#include <vector>

namespace speedywagon {

// Enter your code below:
bool connection_check(pillar_men_sensor* sensor) {
    return (sensor != nullptr);
}

int activity_counter(pillar_men_sensor* sensor_array, int num_sensors) {
    pillar_men_sensor* current = sensor_array;
    int total = 0;
    for (int i = 0; i < num_sensors; i++) {
        total += current->activity;
        current++;
    }
    return total;
}

bool alarm_control(pillar_men_sensor* alarm) {
    std::vector<int>* data = &alarm->data;
    if (data == nullptr) return false;

    if (activity_counter(alarm, 1) > 0) {
        return true;
    }
    return false;
}

bool uv_alarm(pillar_men_sensor* sensor) {
    if (uv_light_heuristic(&sensor->data) > sensor->activity && connection_check(sensor)) return true;
    return false;
}

// Please don't change the interface of the uv_light_heuristic function
int uv_light_heuristic(std::vector<int>* data_array) {
    double avg{};
    for (auto element : *data_array) {
        avg += element;
    }
    avg /= data_array->size();
    int uv_index{};
    for (auto element : *data_array) {
        if (element > avg) ++uv_index;
    }
    return uv_index;
}

}  // namespace speedywagon
