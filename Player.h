#pragma once
#include "src/Coordinates.h"
#include "src/Param.h"

class Player3D : public Object3D {
public:
    Param* health;
    Param* level;
    Param* damage_resistance;
    ~Player3D();
};
