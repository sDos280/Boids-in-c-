//
// Created by DorSh on 24-Jan-23.
//

#ifndef BOIDS_BOID_H
#define BOIDS_BOID_H

#include "raylib.h"
#include "raymath.h"

class Boid {
    public:
        Vector2 position_{};
        Vector2 velocity_{};
        Boid(Vector2 position, Vector2 velocity);
        void update();
        void draw();
};


#endif //BOIDS_BOID_H
