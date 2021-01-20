#include "Weapon.h"

Weapon::~Weapon() {
    delete this->cooldown;
    delete this->damage;
    delete this->reach_distance;
}
