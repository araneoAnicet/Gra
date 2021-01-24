#pragma once
#include "Param.h"

class Weapon {
public:
    Param* reach_distance;
    Param* damage;
    Param* cooldown;
    ~Weapon();
};
