#include "electromagneticforce.h"
#include<cmath>
float ElectromagneticForce::calculateForce(float charge1, float charge2, float distance) {
    // Calculate electromagnetic force using Coulomb's law
    const float k = 8.98755e9f; // Coulomb's constant (N*m^2/C^2)
    return (k * abs(charge1) * abs(charge2)) / (distance * distance);
}
