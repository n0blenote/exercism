#pragma once
#include <string>
#include <vector>

namespace lasagna_master {

struct amount {
    int noodles;
    double sauce;
};

int preparationTime(std::vector<std::string> layers, int average_time = 2);
struct amount quantities(const std::vector<std::string>& layers);
void addSecretIngredient(std::vector<std::string>& own_recipe,
                         const std::vector<std::string>& friend_recipe);
void addSecretIngredient(std::vector<std::string>& own_recipe,
                         const std::string& secret);
std::vector<double> scaleRecipe(const std::vector<double>& portions, int scale);

}
