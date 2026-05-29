#include <iostream>
#include <string>

using namespace std;

// Class Definition
class Student {
private:
    // Private data members (Encapsulation)
    string name;
    int rollNumber;

public:
    // Constructor
    Student(string n, int r) {
        name = n;
        rollNumber = r;
    }

    // Member function to display details
    void display() {
        cout << "Student Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
    }

    // Getter and Setter (Accessors/Mutators)
    void setName(string n) { name = n; }
    string getName() { return name; }
};

int main() {
    // Creating an object
    Student s1("Rahul", 101);
    
    cout << "Initial Data:" << endl;
    s1.display();

    // Using setter to change name
    s1.setName("Rahul Kumar");
    
    cout << "\nUpdated Data (using getter):" << endl;
    cout << "New Name: " << s1.getName() << endl;

    return 0;
}
