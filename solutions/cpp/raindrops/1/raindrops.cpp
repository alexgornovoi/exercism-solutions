#include "raindrops.h"
#include <string>

namespace raindrops {

// TODO: add your solution here
    std::string convert(int num){
        std::string res = "";

        if(num % 3 == 0){
            res += "Pling";
        }
        if(num % 5 == 0){
            res += "Plang";
        }
        if(num % 7 == 0){
            res += "Plong";
        }

        if(res == ""){
            return std::to_string(num);
        }
        return res;
                
    }
}  // namespace raindrops
