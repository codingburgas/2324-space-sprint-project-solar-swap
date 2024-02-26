#include "gravity.h"
#include <iostream>
#include <cmath>
using namespace std;
float Gravity::calculateForce(float mass) {
    // Calculate gravitational force using Newton's law of universal gravitation
    const float G = 6.67430e-11f; // Gravitational constant (m^3/kg/s^2)
    float mEarth;
    cin >> mEarth;
    mEarth = mEarth * (pow(10, 24));
    float rEarth;
    cin >> rEarth;
    system("cls");
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
    }
    return (G * mass * mEarth) / (rEarth * rEarth);
}
