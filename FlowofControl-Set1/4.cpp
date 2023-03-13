// Write a program to determine whether the seller has made profit or incurred loss. 
// Also determine how much profit he made or loss he incurred. 
// Cost price and selling price of an item is input by the user.

#include <iostream>
using namespace std;

int main() {
    int costPrice, sellPrice, diff;

    cout << "To determine profit or loss, enter cost price: \n";
    cin >> costPrice;
    cout << "Enter sell price: \n";
    cin >> sellPrice;

    diff = sellPrice - costPrice;
    (diff >= 0) ? cout << "You have made a profit of: " << diff : 
                 cout << "You have made a loss of: " << diff;

    return 0;
}