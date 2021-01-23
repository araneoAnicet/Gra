#include "BasicSword.h"

BasicSword::BasicSword() {
    this->cooldown = new Param(1, 10, 8);
    this->damage = new Param(0, 100, 4);
    this->reach_distance = new Param(0, 500, 12);
}
