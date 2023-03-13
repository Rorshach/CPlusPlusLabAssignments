// Write a program to calculate area of circle.
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int r;
    cout << "Enter the radius: ";
    cin >> r;
    cout << "The area of the circule is: " << r*r*M_PI;
    
    return 0;
}