// If the ages of Ram, Sulabh and Ajay are input by the user, write a program to determine the youngest of the three.
#include <iostream>
using namespace std;

int main() {
    int r, s, a;
    cout << "Input age of Ram: \n";
    cin >> r;
    cout << "Input age of Sulabh: \n";
    cin >> s;
    cout << "Input age of Ajay: \n";
    cin >> a;

    if (r < s && r < a) {
        cout << "Ram is the youngest";
    } else if (s < a && s < r){
        cout << "Sulabh is the youngest";
    } else {
        cout << "Ajay is the youngest";
    }
    
    return 0;
}