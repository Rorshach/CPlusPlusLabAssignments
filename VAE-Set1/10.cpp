// Write a program to check whether the given number is even or odd (using ? : ternary operator )

#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Enter a number: ";
    cin >> x;

    (x % 2 == 0) ? cout << "The number is even." : cout << "The number is odd";

    return 0;
}