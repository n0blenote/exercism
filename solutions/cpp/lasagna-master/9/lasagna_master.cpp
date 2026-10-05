#include "lasagna_master.h"

namespace lasagna_master {

// TODO: add your solution here
int preparationTime(std::vector<std::string> layers, int average_time) {
    return static_cast<int>(layers.size()) * average_time;
}
int preparationTime(std::vector<std::string> layers) {
    return static_cast<int>(layers.size()) * 2;
}

struct amount quantities(std::vector<std::string> layers) {
    int noodles = 0;
    double sauce = 0.0;
    for (const auto& layer: layers) {
        if (layer == "noodles") noodles += 50;
        if (layer == "sauce") sauce += 0.2;
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
    std::vector<double> scaledRecipe{};
    for (double portion: portions) {
        scaledRecipe.push_back(portion * scale / 2);
    }
    return scaledRecipe;
}

}  // namespace lasagna_master
