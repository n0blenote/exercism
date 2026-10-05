#include "lasagna_master.h"
#include <string>
#include<vector>

namespace lasagna_master {

// TODO: add your solution here
int preperationTime(std::vector<std::string> layers, int average_time) {
    return layers.size() * average_time;
}

amount quantities(std::vector<std::string> layers) {
    int noodles = 0;
    double sauce = 0.0;
    for (int i = 0; i < layers.size(); i++) {
        if (layers[i] == "noodles") noodles = noodles + 50;
        if (layers[i] == "sauce") sauce = sauce += 0.2;
    }
    return amount{noodles,sauce};
}

void addSecretIngredient(std::vector<std::string>& own_recipe, const std::vector<std::string> friend_recipe) {
    own_recipe.back() = friend_recipe.back();
    return;
}
void addSecretIngredient(std::vector<std::string>& own_recipe, std::string secret) {
    own_recipe.back() = secret;
    return;
}

std::vector<double> scaleRecipe(const std::vector<double> portions, int scale) {
    std::vector<double> scaledRecipe;
    for (int i = 0; i > portions.size(); i++) {
        scaledRecipe.push_back(portions[i] * scale);
    }
    return scaledRecipe;
}

}  // namespace lasagna_master
