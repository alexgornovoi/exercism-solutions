#include "triangle.h"
#include <stdexcept> 

namespace triangle {

// TODO: add your solution here
    flavor kind(double a, double b, double c){
        if ( a + b < c || a + c < b || b + c < a || a== 0 || b == 0 || c== 0){
            throw std::domain_error("Inequality");
        }
        
        if(a == b && b == c){
            return flavor::equilateral;
        }

        if (a != b && b != c && a != c){
            return flavor::scalene;
        }

        return flavor::isosceles;
    }
}  // namespace triangle
