#include "Entity.h"
#include "Bow.h"
#include "BasicSword.h"
#include "Game.h"

int main() {
    Entity* hero = new Entity();
    Entity* enemy = new Entity();
    hero->set_damage_resistance(new Param(0, 100, 50));
    hero->set_experience(new Param(0, 9999, 5));
    hero->set_health(new Param(0, 150, 150));
    hero->set_weapon(new Bow());
    
    enemy->set_damage_resistance(new Param(0, 100, 25));
    enemy->set_experience(new Param(0, 9999, 7));
    enemy->set_health(new Param(0, 75, 75));
    enemy->set_weapon(new BasicSword());

    hero->coordinates.x.set(30.0f);
    hero->coordinates.y.set(20.0f);
    hero->coordinates.z.set(30.0f);

    enemy->coordinates.x.set(20.0f);
    enemy->coordinates.y.set(30.0f);
    enemy->coordinates.z.set(20.0f);

    Game::start(hero, enemy);

    delete enemy;
    delete hero;
}