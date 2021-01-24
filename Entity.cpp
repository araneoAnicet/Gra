#include "Entity.h"

Entity::~Entity() {
    delete this->damage_resistance;
    delete this->health;
    delete this->level;
    delete this->weapon;
}

void Entity::set_damage_resistance(Param* damage_resistance) {
    this->damage_resistance = damage_resistance;
}

void Entity::set_health(Param* health) {
    this->health = health;
}

void Entity::set_level(Param* level) {
    this->level = level;
}

void Entity::set_weapon(Weapon* weapon) {
    this->weapon = weapon;
}

void Entity::set_experience(Param* experience) {
    this->experience = experience;
}
