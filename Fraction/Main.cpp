#include <iostream>
#include "Fraction.h"

using namespace std;
using namespace mathlib;

int main() {
    Fraction<int> fraction1{ 15, 5 };
    cout << "Fraction 1: " << fraction1 << endl;

    Fraction<int> fraction2{ 15, 6 };
    fraction2.simplify();
    cout << "Fraction 2 simplified: " << fraction2 << endl;

    cout << fraction1 << " == " << fraction2 << " result: " << (fraction1 == fraction2) << endl;
    cout << fraction1 << " > " << fraction2 << " result: " << (fraction1 > fraction2) << endl;

    cout << fraction1 << " + " << fraction2 << " result: " << (fraction1 + fraction2) << endl;
    cout << fraction1 << " * " << fraction2 << " result: " << (fraction1 * fraction2) << endl;

    Fraction<int> fraction3;
    cout << "Input fraction (numerator - denominator): ";
    cin >> fraction3;
    cout << "You entered: " << fraction3 << endl;
    cout << "As double: " << fraction3.toDouble() << endl;

    Fraction<long> longFraction(5000000000L, 1000000000L);
    cout << "Long Fraction: " << longFraction << " = " << longFraction.toDouble() << endl;

    return 0;
}