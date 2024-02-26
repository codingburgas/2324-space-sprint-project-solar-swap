#include <iostream>
#include "particle.h"
#include "higgsboson.h"
#include "gravity.h"
#include "electromagneticforce.h"
#include "calculateSpeed.h"
#include"drawParticle.h"
#include"SolarSwap.h"
using namespace std;


int main() {
    float distance;
    SolarSwap();
    Particle particle;
    HiggsBoson higgsBoson;
    float delta_mass = higgsBoson.generateMassIncrease();
    particle.interactWithHiggs(delta_mass);
    float mass = particle.getMass();
    cout << "Particle before forces applied:" << endl;
    cout << "/\\  " << endl;
    cout << "\\/  " << endl;
    cout << "The particle's mass is " << mass <<"kg" << endl;
    cout << "Enter the distance between the two objects ";
    cin >> distance;
    cout << "Enter planet mass and radius(mass is multiplied by ten to the twenty-fourth power and the radius is multiplied by ten to the sixth power)" << endl;
    float gravitational_force = Gravity::calculateForce(mass);
    float electromagnetic_force = ElectromagneticForce::calculateForce(1, -1,distance); 
    cout << "\nApplying forces to the particle:" << endl;
    cout << "Gravitational force: " << gravitational_force << " N" << endl;
    cout << "Electromagnetic force: " << electromagnetic_force << " N" << endl;
    cout << "\nParticle after forces applied:" << endl;
    drawParticle();
    float time = 1.0f;
    float speed = calculateSpeed(gravitational_force, mass, time);
    cout << "\nParticle's mass: " << mass << " kg" << endl;
    cout << "Speed after " << time << " seconds: " << speed << " m/s" ;
    return 0;
}
