// Any character is entered by the user; write a program to determine whether the character entered is a capital letter, a small case letter, a digit or a special symbol. 
// The following table shows the range of ASCII values for various characters.

// Characters	ASCII Values
// A – Z	65 – 90
// a – z	97 – 122
// 0 – 9	48 – 57
// special symbols	0 - 47, 58 - 64, 91 - 96, 123 – 127

#include <iostream> 
using namespace std;

int main() {
    char c;
    int char_val;
    cout << "Enter a character: \n";
    cin >> c;

    char_val = (int) c;

    if (char_val >= 48 && char_val <= 57) {
        cout << "Character is a number.";
    } else if (char_val >= 97 && char_val <= 122) {
        cout << "Character is a lowercase letter.";
    } else if (char_val >= 65 && char_val <= 90) {
        cout << "Character is a uppercase letter.";
    } else if ( (char_val >= 0 && char_val <= 47) || 
                (char_val >= 58 && char_val <= 64) || 
                (char_val >= 91 && char_val <= 96) || 
                (char_val >= 123 && char_val <= 127)) {
        cout << "Character is a special symbol.";
    }

    return 0;
}