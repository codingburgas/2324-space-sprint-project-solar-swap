#include "calculateSpeed.h"
#include <cmath>

float calculateSpeed(float force, float mass, float time) {
    // Calculate acceleration using Newton's second law
    float acceleration = force / mass;

    // Calculate displacement assuming starting from rest
    float displacement = 0.5f * acceleration * time * time;

    // Calculate final velocity using the equation of motion
    float velocity = sqrt(2 * acceleration * displacement);

    return velocity;
}
