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
class Gravity {

public:

    static float calculateForce(float mass) {

        // Calculate gravitational force using Newton's law of universal gravitation

        const float G = 6.67430e-11f; // Gravitational constant (m^3/kg/s^2)

        //float mEarth = 5.972e24f; // Mass of Earth (kg)

        float mEarth;

        cin >> mEarth;

        mEarth = mEarth * (pow(10, 24));

        //float rEarth = 6.371e6f; // Radius of Earth (m)

        float rEarth;

        cin >> rEarth;

        float x = 1.989 * (pow(10, 32));

        rEarth = rEarth * (pow(10, 6));

        if ((mEarth / rEarth) > x) {

            cout << "You have created a black hole" << endl;

            cout << "                                &&&## $(#(((# $## $&&                              " << endl;

            cout << "                             && $#( / / /& / / $&& /&  $( /# $&&               " << endl;

            cout << "                            & $( /*(#( /$        #&& &( $ $ $&                 " << endl;

            cout << "                        &&& $( /*(, $*#            $&  $# $ $&&              " << endl;

            cout << "               &&&&& $#&(##** $**&*&#&               & $ $ $ $ $#&& $&&  &&       " << endl;

            cout << "        &  &&&&& $( / /# /* / /,***,                  & && $ $ $ $ $# $&&&&&&&  " << endl;

            cout << endl;

            cout << "                               & $ / $*            &&#&                            " << endl;

            cout << "                                &# / $( /( $   &&&(&(#&                             " << endl;

            cout << "                                   &## / / / / / / /#& $&                   " << endl;

            cout << "                                              &  &                      " << endl;

            cout << "                                                                                " << endl;

            cout << "                                                                                " << endl;

        }

        return (G * mass * mEarth) / (rEarth * rEarth);

    }

};
int main() {

    
}
