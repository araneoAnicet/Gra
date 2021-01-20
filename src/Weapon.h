#pragma once
#include "Param.h"
#include "Coordinates.h"
#include "TickHandler.h"

class Weapon : public TickHandler {
protected:
    Param* reach_distance;
    Param* damage;
    Param* cooldown;
public:
    ~Weapon();
};
