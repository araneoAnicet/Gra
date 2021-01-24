#include "Bow.h"

Bow::Bow() {
    this->cooldown = new Param(0, 10, 10);
    this->damage = new Param(0, 9, 9);
    this->reach_distance = new Param(0, 150, 150);
}
