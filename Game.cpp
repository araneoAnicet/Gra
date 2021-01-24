#include "Game.h"

void Game::start(Entity* hero, Entity* enemy) {
    float x1;
    float y1;
    float z1;
    float x2;
    float y2;
    float z2;
    float distance;
    int damage_hero_receives = 0;
    int damage_enemy_receives = 0;

    unsigned int tick_counter = 0;
    while (!(hero->health->is_empty()) && !(enemy->health->is_empty())) {
        hero->weapon->cooldown->decrease_by(1);
        enemy->weapon->cooldown->decrease_by(1);
        x1 = hero->coordinates.x.get();
        y1 = hero->coordinates.y.get();
        z1 = hero->coordinates.z.get();
        x2 = enemy->coordinates.x.get();
        y2 = enemy->coordinates.y.get();
        z2 = enemy->coordinates.z.get();
        distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2));

        std::cout << "Game tick " << tick_counter << ": ";
        if (hero->weapon->cooldown->is_empty()) {
            if (hero->weapon->reach_distance->get() >= distance) {
                damage_enemy_receives = (1 - enemy->damage_resistance->get()) * hero->weapon->damage->get();
                enemy->health->decrease_by(damage_enemy_receives);
                std::cout << "HERO DELIVERS " << damage_enemy_receives << " DAMAGE POINTS!" << std::endl;
                std::cout << ">> Hero's health: " << hero->health->get() << "/" << hero->health->get_max() << std::endl;
                std::cout << ">> Enemy's health: " << enemy->health->get() << "/" << enemy->health->get_max() << std::endl;
            }
        }

        if (enemy->weapon->cooldown->is_empty()) {
            if (enemy->weapon->reach_distance->get() >= distance) {
                damage_hero_receives = (1 - hero->damage_resistance->get()) * enemy->weapon->damage->get();
                hero->health->decrease_by(damage_hero_receives);
                std::cout << "ENEMY DELIVERS " << damage_hero_receives << " DAMAGE POINTS!" << std::endl;
                std::cout << ">> Hero's health: " << hero->health->get() << "/" << hero->health->get_max() << std::endl;
                std::cout << ">> Enemy's health: " << enemy->health->get() << "/" << enemy->health->get_max() << std::endl;
            }
        }
        std::cout << std::endl;
        ++tick_counter;
    }
    std::cout << "Much result: " << std::endl;
    if (hero->health->is_empty()) {
        std::cout << "Hero is dead" << std::endl;
    } else {
        std::cout << "Hero is alive" << std::endl;
    }
    if (enemy->health->is_empty()) {
        std::cout << "Enemy is dead" << std::endl;
    } else {
        std::cout << "Enemy is alive" << std::endl;
    }
}
