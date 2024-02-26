#include "particle.h"

Particle::Particle(float m) : mass(m) {}

Particle::Particle() : mass(0) {}

void Particle::interactWithHiggs(float delta_mass) {
    // Gain mass after interacting with Higgs boson
    mass += delta_mass;
}

float Particle::getMass() const {
    return mass;
}
