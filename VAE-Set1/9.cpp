// Write a program to check whether the given number is positive or negative (using ? : ternary operator )

#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Enter a number: ";
    cin >> x;

    (x > 0) ? cout << "The number is positive." : cout << "The number is negative.";
    return 0;
}