//
// Created by DorSh on 24-Jan-23.
//

#include "Boid.h"

void Boid::draw() const {
    DrawCircleV(position_, 5, {255, 0, 0, 255});
}

Boid::Boid(Vector2 position, Vector2 velocity) {
    position_ = position;
    velocity_ = velocity;
}
