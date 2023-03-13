// Write a program which accept temperature in Farenheit and print it in centigrade.
#include <iostream>
using namespace std;

int main() {
    int f, c;


    cout << "Enter Farenheit to convert to Centigrade: \n";
    cin >> f;

    c = (f-32)*5/9;
    cout << "Temperature in centigrade is : " << c;
    return 0;
}

