// Any year is input by the user. Write a program to determine whether the year is a leap year or not.
#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter a year to determine if it is a leap year. \n";
    cin >> year;

    (year % 4 == 0) ? cout << "Leap year." : cout << "Not a leap year.";

    return 0;
}