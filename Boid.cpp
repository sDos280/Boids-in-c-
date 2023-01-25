//
// Created by DorSh on 24-Jan-23.
//

#include "Boid.h"

Boid::Boid(Vector2 position, Vector2 velocity) {
    position = position;
    velocity = Vector2Normalize(velocity);
}

void Boid::update() {
    position.x += velocity.x;
    position.y += velocity.y;
}

void Boid::draw() {
    DrawCircleV(position, 10, {255, 0, 0, 255});
    DrawLineV(position, Vector2Add(position, Vector2Scale(velocity, 10)), {0, 0, 255, 255});
}
