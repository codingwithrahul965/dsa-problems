#include <iostream>

using namespace std;

// 1. Recursive Factorial
int factorial(int n) {
    // Base Case
    if (n <= 1) return 1;
    
    // Recursive Case
    return n * factorial(n - 1);
}

// 2. Recursive Fibonacci
int fibonacci(int n) {
    // Base Case
    if (n <= 1) return n;
    
    // Recursive Case
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int num = 5;
    cout << "Factorial of " << num << " is: " << factorial(num) << endl;

    cout << "First 10 Fibonacci numbers: ";
    for(int i = 0; i < 10; i++) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;

    return 0;
}
