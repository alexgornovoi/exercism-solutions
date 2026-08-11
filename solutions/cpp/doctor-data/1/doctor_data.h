#pragma once

#include <string>

namespace star_map {

enum class System {
    BetaHydri,
    EpsilonEridani,
    Sol,
    AlphaCentauri,
    DeltaEridani,
    Omicron2Eridani
};

}  // namespace star_map

namespace heaven {

class Vessel {
   public:
    Vessel(std::string n, int num, star_map::System s);
    Vessel(std::string n, int num);

    Vessel replicate(std::string new_name) const;
    void make_buster();
    bool shoot_buster();

    star_map::System current_system{};
    int generation = 0;
    int busters = 0;
    std::string name = "";
};

std::string get_older_bob(const Vessel& v1, const Vessel& v2);
bool in_the_same_system(const Vessel& v1, const Vessel& v2);

}  // namespace heaven