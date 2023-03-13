// The marks obtained by a student in 5 different subjects are input by the user. The student gets a division as per the following rules:
// Percentage above or equal to 60 - First division
// Percentage between 50 and 59 - Second division
// Percentage between 40 and 49 - Third division
// Percentage less than 40 - Fail
// Write a program to calculate the division obtained by the student.
#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e, avg;
    cout << "Enter the scores of 5 different subject. \n";
    cin >> a >> b >> c >> d >> e;
    avg = (a+b+c+d+e)/5;

    if (avg >= 60) {
        cout << "First division.";
    } else if (avg >= 50) {
        cout << "Second division";
    } else if (avg >= 40) {
        cout << "Third division";
    } else {
        cout << "Fail";
    }

    return 0;
}