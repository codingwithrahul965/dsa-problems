#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    int birthYear;

    cout << "Enter your name: ";
    // Use getline for strings to capture spaces
    getline(cin, name); 

    cout << "Enter your birth year: ";
    cin >> birthYear;

    int currentYear = 2026;
    int age = currentYear - birthYear;

    cout << "Hello " << name << "! You are approximately " << age << " years old." << endl;

    return 0;
}
