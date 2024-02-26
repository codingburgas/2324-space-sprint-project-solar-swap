#include "higgsboson.h"
#include <cstdlib>
#include <ctime>

float HiggsBoson::generateMassIncrease() {
    // Simulate Higgs boson collision, randomly generate mass increase
    srand(time(nullptr)); // Seed random number generator with current time
    return ((rand() % 10) / 10.0f) * 0.9f + 0.1f; // random mass increase 0.1 1
}
