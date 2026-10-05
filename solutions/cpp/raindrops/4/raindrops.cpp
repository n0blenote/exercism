#include "raindrops.h"
#include <string>

namespace raindrops {

// TODO: add your solution here
std::string pling{"Pling"};
std::string plang{"Plang"};
std::string plong{"Plong"};

std::string convert(int number) {
  std::string returnString{""};
  if (number % 3 != 0 && number % 5 != 0 && number % 7 != 0) {
    return std::to_string(number);
  }
  if (number % 3 == 0) {
    returnString += "Pling";
  }
  if (number % 5 == 0) {
    returnString += "Plang";
  }
  if (number % 7 == 0) {
    returnString += "Plong";
  }
  return returnString;
}

} // namespace raindrops
