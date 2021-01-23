#include "Bow.h"

Bow::Bow() {
    this->cooldown = new Param(1, 10, 10);
    this->damage = new Param(0, 100, 9);
    this->reach_distance = new Param(0, 500, 150);
}
