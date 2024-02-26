#pragma once

class Particle {
private:
    float mass;
public:
    Particle(float m);
    Particle();
    void interactWithHiggs(float delta_mass);
    float getMass() const;
};
