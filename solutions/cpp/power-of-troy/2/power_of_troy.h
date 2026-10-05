#pragma once

#include <memory>
#include <string>

namespace troy {

struct artifact {
    // constructors needed (until C++20)
    artifact(std::string name) : name(name) {}
    std::string name;
};

struct power {
    // constructors needed (until C++20)
    power(std::string effect) : effect(effect) {}
    std::string effect;
};

struct human {

    human();

  std::unique_ptr<artifact> possession;
  std::shared_ptr<power> own_power;
  std::shared_ptr<power> influenced_by;
};

}  // namespace troy
