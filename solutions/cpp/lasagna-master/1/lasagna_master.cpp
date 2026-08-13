#include "lasagna_master.h"

namespace lasagna_master {

// TODO: add your solution here
    int preparationTime(std::vector<std::string> layers, int p){
        return p * layers.size();
    }

    amount quantities(std::vector<std::string> i){
        amount res{0,0};    

        for(std::string s: i){
            if(s == "sauce"){
                res.sauce+=0.2;
            }
            if(s == "noodles"){
                res.noodles+=50;
            }
        }
        return res;
    }

    void addSecretIngredient(std::vector<std::string>& ref, std::vector<std::string> fre){
        int s = ref.size() - 1;
        int f = fre.size() - 1;
        ref[s] = fre[f];
    }

    std::vector<double> scaleRecipe(const std::vector<double>& q, int p){
        std::vector<double> res = q;
        for(double& i: res){
            i *= p/2.0;
        }
        return res;
    }

    void addSecretIngredient(std::vector<std::string>& ref, std::string fre){
        int s = ref.size() - 1;
        ref[s] = fre;
    }
    
}  // namespace lasagna_master
