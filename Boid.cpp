//
// Created by DorSh on 24-Jan-23.
//

#include <iostream>
#include "Boid.h"

Boid::Boid(Vector2 position, Vector2 velocity) {
    position_ = position;
    velocity_ = Vector2Normalize(velocity);
}

void Boid::update() {
    position_.x += velocity_.x * 10;
    position_.y += velocity_.y * 10;
}

void Boid::draw() {
    DrawCircleV(position_, 10, {255, 0, 0, 255});
    DrawLineV(position_, Vector2Add(position_, Vector2Scale(velocity_, 10)), {0, 0, 255, 255});
}
