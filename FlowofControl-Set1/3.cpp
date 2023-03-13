// Write a program to calculate the total expenses. 
// Quantity and price per item are input by the user and discount of 10% is offered if the expense is more than 5000.

#include <iostream>
using namespace std;

int main() {
    int quantity, item, total;
    cout << "This program calculates the total expenses. \n";
    cout << "An additional 10% discount is included for expenses more than 5000. \n";
    cout << "Enter the price of the item: \n";
    cin >> item;
    cout << "Enter the quantity of the item: \n";
    cin >> quantity;

    total = quantity * item;
    if (total > 5000) total = total * .9;

    cout << "Total expenses: " << total;

    return 0;
}