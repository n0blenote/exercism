#include "power_of_troy.h"
#include <memory>

namespace troy {

    void give_new_artifact(human& recipient, std::string artifact_name) {
        artifact new_artifact = artifact{artifact_name};
        recipient.possession = std::make_unique<artifact>(new_artifact);
        return;
    }
    void exchange_artifacts(std::unique_ptr<artifact>& artifact1, std::unique_ptr<artifact>& artifact2) {
        artifact1.swap(artifact2);
        return;
    }

    void manifest_power(human& recipient, std::string effect) {
        power new_power = power{effect};
        recipient.own_power = std::make_shared<power>(new_power);
        return;
    }

    void use_power(human& caster, human& target) {
        target.influenced_by = caster.own_power;
        return;
    }

    int power_intensity(human caster) {
        if (caster.own_power == nullptr) return 0;
        return caster.own_power.use_count();
    }
}  // namespace troy
