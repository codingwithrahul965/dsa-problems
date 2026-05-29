#include <iostream>
#include <string>

using namespace std;

int main() {
    // 1. Integer: Stores whole numbers
    int age = 25;
    
    // 2. Double: Stores decimal numbers (floating point)
    double price = 19.99;
    
    // 3. Character: Stores a single character
    char grade = 'A';
    
    // 4. Boolean: Stores true or false
    bool isProgrammer = true;
    
    // 5. String: Stores text (requires #include <string>)
    string name = "Rahul";

    // Printing the values
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Price: " << price << endl;
    cout << "Grade: " << grade << endl;
    cout << "Is Programmer: " << (isProgrammer ? "Yes" : "No") << endl;

    return 0;
}
