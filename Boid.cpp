//
// Created by DorSh on 24-Jan-23.
//

#include "Boid.h"

Boid::Boid(Vector2 pos) : position(pos) {}

void Boid::draw() const {
    DrawCircleV(position, 5, {255, 0, 0, 255});
}
