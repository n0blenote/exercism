#include "doctor_data.h"

void heaven::Vessel::make_buster() {
    busters++;
}
bool heaven::Vessel::shoot_buster() {
    if (busters > 0) {
        busters--;
        return true;
    }
    return false;
}
heaven::Vessel heaven::Vessel::replicate(std::string new_name) {
    return heaven::Vessel(
        new_name,
        heaven::Vessel::generation,
        heaven::Vessel::current_system);
}

std::string heaven::get_older_bob(Vessel vessel_1, Vessel vessel_2) {
    if (vessel_1.generation > vessel_2.generation) {
        return vessel_1.name;
    } else {
        return vessel_2.name;
    }
}

bool heaven::in_the_same_system(heaven::Vessel vessel_1, heaven::Vessel vessel_2) {
    if (vessel_1.current_system == vessel_2.current_system) {
        return true;
    } else {
        return false;
    }
}
