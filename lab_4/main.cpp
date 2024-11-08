#include <iostream>
#include "RightTriangle.h"
#include "operators.h"
using namespace std;



int main() {
    double r_a;
    double r_b;
    cout << "Input Triangle side a --> ";
    while(!(cin>> r_a)) {
        cout << "Wrong !! Enter again !\n";
        cin.clear();
        cin.ignore();
        cout << "Enter int: ";
    }

    cout << "Input Triangle side b --> ";
    while(!(cin>> r_b)) {
        cout << "Wrong !! Enter again !\n";
        cin.clear();
        cin.ignore();
        cout << "Enter int: ";
    }

    RightTriangle t1 {r_a,r_b};
    RightTriangle t2 {};

    t1.calculate_result();
    t2.calculate_result();
    cout << "Triangle t1 with square and sides " << t1 << "\n";
    cout << "Triangle t2 with square and sides " << t2 << "\n";

    double convertedValue = static_cast<double>(t1);
    bool existValue;
    existValue = t1;

    cout << "comparison --" << (t1 <= t2) << "\n";

    cout << "double -> " << convertedValue << "\n";
    cout << "bool -> " << existValue;

    return 0;
}
