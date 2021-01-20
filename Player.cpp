#include "Player.h"

Player3D::~Player3D() {
    delete this->damage_resistance;
    delete this->health;
    delete this->level;
}