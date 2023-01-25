//
// Created by DorSh on 24-Jan-23.
//

#ifndef BOIDS_BOID_H
#define BOIDS_BOID_H

#include "raylib.h"

class Boid {
    public:
        Vector2 position;
        Vector2 velocity;

        Boid(Vector2 pos);
        void draw() const;
};


#endif //BOIDS_BOID_H
