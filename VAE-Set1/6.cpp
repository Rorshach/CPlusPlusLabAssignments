// Write a program which accepts a character and display its ASCII value
#include <iostream>
using namespace std;

int main() {
    char x;

    cout << "Enter a character: ";
    cin >> x;
    cout << "ASCII value of "<< x << " is " << static_cast<int>(x);
    return 0;
}