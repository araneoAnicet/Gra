#pragma once

class Param {
private:
    int max_points;
    int min_points;
    int current;
public:
    Param();
    Param(int min_points, int max_points, int current);
    void increase_by(int value);
    void decrease_by(int value);
    int get();
    void set(int value);
    int get_max();
    void set_max(int value);
    int get_min();
    void set_min(int value);
    bool is_full();
    bool is_empty();
};
