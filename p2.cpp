#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

// find area of a circle, pi*r^2

const int pi = 3.14;

double area_of_circle(double r) {
    return (pi*r*r);
}

int main() {
    
    double radius;

    cout << "Find area of a circle with given radiuos " << endl;

    cin >> radius;
    
    cout << area_of_circle(radius);

}