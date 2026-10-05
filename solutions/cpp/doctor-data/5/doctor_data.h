// ERROR: FILE CORRUPTED. Please supply valid C++ Code.
#pragma once
#include <string>


namespace star_map {
    enum System {
        BetaHydri,
        Sol,
        EpsilonEridani,
        AlphaCentauri,
        DeltaEridani,
        Omicron2Eridani,
    };
}

namespace heaven {
    // Creating the vessel class
    class Vessel {
        public:
        //Constructors
        Vessel(std::string new_name, int new_age) {
            name = new_name;
            generation = new_age;

        }
        Vessel(std::string new_name, int new_age, star_map::System system) {
            name = new_name;
            generation = new_age;
            current_system = system;
        }
        // Delcaration of functions
        Vessel replicate(std::string new_name);
        void make_buster();
        bool shoot_buster();


            int generation{};
            int busters = 0;
            std::string name{};
            star_map::System current_system = star_map::System::Sol; // Default is Sol
    };
    std::string get_older_bob(Vessel vessel_1, Vessel vessel_2);
    bool in_the_same_system(Vessel vessel_1, Vessel vessel_2);

}
