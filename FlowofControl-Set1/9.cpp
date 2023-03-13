// Write a program to calculate the monthly telephone bills as per the following rule:
// Minimum Rs. 200 for upto 100 calls.
// Plus Rs. 0.60 per call for next 50 calls.
// Plus Rs. 0.50 per call for next 50 calls.
// Plus Rs. 0.40 per call for any call beyond 200 calls.

#include <iostream>
using namespace std;

int main() {
    int calls;
    float bill = 200;
    cout << "Enter the number of calls to calculate the monthly telephone bill. \n";
    cin >> calls;

    if (calls > 100 && calls <= 150) {
        calls -= 100;
        bill += calls  * .60;
    } else if (calls > 150 && calls <= 200) {
        calls -= 150;
        bill += (50 * .6) + calls * .5;
    } else if (calls > 200) {
        calls -= 200;
        bill += (50 * .6) + (50 * .5) + (calls * .4);
    }

    cout << "Bill is: " << bill;
    return 0;
}