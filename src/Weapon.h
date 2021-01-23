#pragma once
#include "Param.h"

class Weapon {
protected:
    Param* reach_distance;
    Param* damage;
    Param* cooldown;
public:
    ~Weapon();
};
