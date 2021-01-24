#pragma once
#include "src/Coordinates.h"
#include "src/Param.h"
#include "src/Weapon.h"

class Entity : public Object3D {
public:
    Weapon* weapon;
    Param* health;
    Param* level;
    Param* damage_resistance;
    Param* experience;
    void set_weapon(Weapon* weapon);
    void set_health(Param* health);
    void set_level(Param* level);
    void set_damage_resistance(Param* damage_resistance);
    ~Entity();
};
