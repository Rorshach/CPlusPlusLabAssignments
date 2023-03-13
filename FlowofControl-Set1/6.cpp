// Write a program to check whether a triangle is valid or not, when the three angles of the triangle are entered by the user. 
// A triangle is valid if the sum of all the three angles is equal to 180 degrees.

#include <iostream>
using namespace std;

int main() {
    int total, angle;
    cout << "Enter three angles to determine if it is a valid triangle. \n";
    cout << "Enter first angle. \n";
    cin >> total;
    cout << "Enter second angle. \n";
    cin >> angle;
    total += angle;
    cout << "Enter third angle. \n";
    cin >> angle;
    total += angle;

    (total == 180) ? cout << "Valid triangle. \n" : cout << "Invalid triangle. \n";
    return 0;
}