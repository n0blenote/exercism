#include "lasagna_master.h"

namespace lasagna_master {

int preparationTime(std::vector<std::string> layers, int average_time) {
    return static_cast<int>(layers.size()) * average_time;
}

struct amount quantities(const std::vector<std::string>& layers) {
    int noodles = 0;
    double sauce = 0.0;
    for (const auto& layer : layers) {
        if (layer == "noodles") noodles += 50;
        if (layer == "sauce")   sauce  += 0.2;
    }
    return amount{noodles, sauce};
}

void addSecretIngredient(std::vector<std::string>& own_recipe,
                         const std::vector<std::string>& friend_recipe) {
    own_recipe.back() = friend_recipe.back();
}

void addSecretIngredient(std::vector<std::string>& own_recipe,
                         const std::string& secret) {
    own_recipe.back() = secret;
}

std::vector<double> scaleRecipe(const std::vector<double>& portions, int scale) {
    std::vector<double> scaledRecipe{};
    for (double portion : portions) {
        scaledRecipe.push_back(portion * scale / 2.0);
    }
    return scaledRecipe;
}

}  // namespace lasagna_master
