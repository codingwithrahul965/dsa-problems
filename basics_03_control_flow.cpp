#include <iostream>

using namespace std;

int main() {
    int number;
    cout << "Enter a number to check if it's even or odd: ";
    cin >> number;

    // 1. Conditionals (If-Else)
    if (number % 2 == 0) {
        cout << number << " is Even." << endl;
    } else {
        cout << number << " is Odd." << endl;
    }

    // 2. For Loop: Simple counting
    cout << "\nCounting from 1 to 5 using a for loop:" << endl;
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << endl;

    // 3. While Loop: Repeat until a condition is met
    cout << "\nCountdown using a while loop:" << endl;
    int countdown = 3;
    while (countdown > 0) {
        cout << countdown << "... " << endl;
        countdown--;
    }
    cout << "Blast off!" << endl;

    return 0;
}
