#pragma once

namespace space_age {

// TODO: add your solution here
class space_age{
        public:
            space_age(long s){
                age = s;
            }

            long seconds() const{
                return age;
            }

            double on_earth() const{
                return age/31'557'600.0; 
            }

            double on_mercury() const{
                return on_earth() / 0.2408467;
            }

            double on_venus() const{
                return on_earth() / 0.61519726;
            }

            double on_mars() const{
                return on_earth() / 1.8808158;
            }

            double on_jupiter() const{
                return on_earth() / 11.862615;
            }

            double on_saturn() const{
                return on_earth() / 29.447498;
            }

            double on_uranus() const{
                return on_earth() / 84.016846;
            }

            double on_neptune() const{
                return on_earth() / 164.79132;
            }
            
        private:
            long age{};

    
    };
}  // namespace space_age
