#include "Param.h"

Param::Param(int min_points, int max_points, int current) {
    this->max_points = min_points;
    this->max_points = max_points;
    this->current = current;
}

void Param::increase_by(int value) {
    if (this->current + value > this->max_points) {
        this->current = this->max_points;
    } else {
        this->current += value;
    }
}

void Param::decrease_by(int value) {
    if (this->current - value < this->min_points) {
        this->current = this->min_points;
    } else {
        this->current -= value;
    }
}
int Param::get() {
    return this->current;
}

void Param::set(int value) {
    if (value > this->max_points) {
        this->current = this->max_points;
    } else if (value < this->min_points) {
        this->current = this->min_points;
    } else {
        this->current = value;
    }
}

int Param::get_max() {
    return this->max_points;
}

int Param::get_min() {
    return this->min_points;
}

void Param::set_max(int value) {
    this->max_points = value;
}

void Param::set_min(int value) {
    this->min_points = value;
}

bool Param::is_full() {
    return this->current == this->max_points;
}

bool Param::is_empty() {
    return this->current == this->min_points;
}
