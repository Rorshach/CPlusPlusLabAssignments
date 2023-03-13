// Write a program which accept principle, rate and time from user and print the simple interest.
#include <iostream>
using namespace std;

int main() {
    int p, r, t, i;


    cout << "Enter principle: \n";
    cin >> p;
    cout << "Enter rate: \n";
    cin >> r;
    cout << "Enter time: \n"; 
    cin >> t;

    i = p*r*t/100;
    cout << "The simple interest rate is: " << i;
    return 0;
}

