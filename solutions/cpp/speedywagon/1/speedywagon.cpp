#include "speedywagon.h"

namespace speedywagon {

// Enter your code below:
bool connection_check(pillar_men_sensor* ptr){
    return ptr != nullptr;
}

int activity_counter(pillar_men_sensor* sens, int size){
    int res = 0;
    for(int i = 0; i<size; i++){
        res += sens->activity;
        sens++;
    }
    return res;
}

bool alarm_control(pillar_men_sensor* ptr){
    if(ptr == nullptr){
        return false;
    }

    return ptr->activity>0;
}
// Please don't change the interface of the uv_light_heuristic function
int uv_light_heuristic(std::vector<int>* data_array) {
    double avg{};
    for (auto element : *data_array) {
        avg += element;
    }
    avg /= data_array->size();
    int uv_index{};
    for (auto element : *data_array) {
        if (element > avg) ++uv_index;
    }
    return uv_index;
}

bool uv_alarm(pillar_men_sensor* ptr){
    if(ptr == nullptr){
        return false;
    }

    int res = uv_light_heuristic(&ptr->data);

    return res > ptr->activity;
}

}  // namespace speedywagon
