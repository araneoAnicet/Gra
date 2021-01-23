#include "NoWeapon.h"

NoWeapon::NoWeapon() {
    this->cooldown = new Param(0, 0, 0);
    this->damage = new Param(0, 0, 0);
    this->reach_distance = new Param(0, 0, 0);
}
