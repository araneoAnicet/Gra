#include "BasicSword.h"

BasicSword::BasicSword() {
    this->cooldown = new Param(0, 8, 8);
    this->damage = new Param(0, 4, 4);
    this->reach_distance = new Param(0, 20, 20);
}
