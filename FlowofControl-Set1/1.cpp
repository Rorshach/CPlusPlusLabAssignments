// Any integer is input by the user. Write a program to find out whether it is an odd number or even number.
#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Enter a number: \n";
    cin >> x;
    (x % 2 == 0) ? cout << "Number is even" : cout << "Number is odd";

    return 0;
}
