#include <iostream>

using namespace std;

// 1. A function that doesn't return anything (void)
void greet() {
    cout << "Welcome to C++ Basics!" << endl;
}

// 2. A function that takes parameters and returns a value
int addNumbers(int a, int b) {
    return a + b;
}

// 3. A function to calculate the square of a number
double square(double n) {
    return n * n;
}

int main() {
    greet();

    int sum = addNumbers(10, 20);
    cout << "Sum of 10 and 20 is: " << sum << endl;

    double num = 5.5;
    cout << "Square of " << num << " is: " << square(num) << endl;

    return 0;
}
