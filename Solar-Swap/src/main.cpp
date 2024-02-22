#include <iostream>

#include <cmath>

#include <cstdlib>

#include <ctime>


using namespace std;


float calculateSpeed(float force, float mass, float time) {

    // Calculate acceleration using Newton's second law

    float acceleration = force / mass;

    // Calculate displacement assuming starting from rest

    float displacement = 0.5f * acceleration * time * time;

    // Calculate final velocity using the equation of motion

    float velocity = sqrt(2 * acceleration * displacement);

    return velocity;

}

class Particle {

private:

    float mass;

public:

    Particle(float m) : mass(m) {}

    Particle() : mass(0) {}

    void interactWithHiggs(float delta_mass) {

        // Gain mass after interacting with Higgs boson

        mass += delta_mass;

    }

    float getMass() const { return mass; }

};

int main() {

    
}
