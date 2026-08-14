#include "power_of_troy.h"
#include <string>

namespace troy {
    void give_new_artifact(human& hu, std::string art){
        hu.possession = std::make_unique<artifact>(artifact(art));
    }

    void exchange_artifacts(std::unique_ptr<artifact>& p1, std::unique_ptr<artifact>& p2){
        std::swap(p1,p2);
    }

    void manifest_power(human& hu, std::string pow){
        hu.own_power = std::make_shared<power>(power(pow));
    }

    void use_power(human& caster, human& target){
        target.influenced_by = caster.own_power;
    }

    int power_intensity(human& hu){
        return hu.own_power.use_count();
    }
    
}  // namespace troy
