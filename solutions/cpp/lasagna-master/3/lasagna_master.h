#pragma once
#include <string>
#include<vector>


namespace lasagna_master {
    int preparationTime(std::vector<std::string> layers, int average_time);
    struct amount quantities(std::vector<std::string> layers);
    void addSecretIngredient(std::vector<std::string>& own_recipe, const std::vector<std::string> friend_recipe);
    std::vector<double> scaleRecipe(const std::vector<double> portions, int scale);

struct amount {
    int noodles;
    double sauce;
};

}  // namespace lasagna_master
