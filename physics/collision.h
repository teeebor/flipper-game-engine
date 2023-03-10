#pragma once
#include "physics.h"
#include "../objects.h"
#include "../util/dml.h"

typedef struct {
    PhysicsBody *a, *b;
    Vector normal;
    float depth;
    bool collision;
} CollisionInfo;

void collide(PhysicsBody *a, PhysicsBody *b, CollisionInfo *result);