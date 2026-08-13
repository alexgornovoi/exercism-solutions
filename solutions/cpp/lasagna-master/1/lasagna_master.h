#pragma once
#include <vector>
#include <string>

namespace lasagna_master {

struct amount {
    int noodles;
    double sauce;
};

int preparationTime(std::vector<std::string> layers, int p = 2);

amount quantities(std::vector<std::string> i);

void addSecretIngredient(std::vector<std::string>& ref, std::vector<std::string> fre);

std::vector<double> scaleRecipe(const std::vector<double>& q,int p);

void addSecretIngredient(std::vector<std::string>& ref, std::string fre);
    
}  // namespace lasagna_master
