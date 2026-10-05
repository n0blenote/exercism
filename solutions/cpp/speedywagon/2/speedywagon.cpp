#include "speedywagon.h"
#include <vector>

namespace speedywagon {

// Enter your code below:
bool connection_check(pillar_men_sensor* sensor) {
    if (sensor == nullptr) {
        return false;
    }
    return true;
}

int activity_counter(pillar_men_sensor* sensor_array) {
    pillar_men_sensor* current = sensor_array;
    int total = 0;
    while (true) {
        if (current++ == nullptr) {
            return total;
        } else {
            total = total + current->activity;
        }
        current++;
    }
}

bool alarm_control(pillar_men_sensor* alarm) {
    std::vector<int>* data = &alarm->data;
    if (data == nullptr) return false;
    int total = 0;

    for (int item: *data) {
        if (item > 0) {
            return true;
        }
    }
    return false;
}

bool uv_alarm(pillar_men_sensor* sensor) {
    if (sensor == nullptr) return false;
    int uv_index = uv_light_heuristic(&sensor->data);
    if (uv_index > sensor->activity) return true;
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
