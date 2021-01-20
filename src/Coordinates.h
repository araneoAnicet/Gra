#pragma once


class Coordinate {
private:
    float value;
public:
    float get();
    void set(float value);
};

class Coordinates3D {
public:
    Coordinate x;
    Coordinate y;
    Coordinate z;
};

class Coordinates2D {
public:
    Coordinate x;
    Coordinate y;
};

class Object2D {
public:
    Coordinates2D coordinates;
};

class Object3D {
public:
    Coordinates3D coordinates;
};
