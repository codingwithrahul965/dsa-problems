#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "C++ Programming";

    // 1. Basic properties
    cout << "String: " << str << endl;
    cout << "Length: " << str.length() << " or " << str.size() << endl;

    // 2. Concatenation
    string greeting = "Hello, ";
    string name = "Rahul";
    string welcome = greeting + name + "!";
    cout << "Combined: " << welcome << endl;

    // 3. Substring
    string sub = str.substr(4, 7); // (start_index, length)
    cout << "Substring (from 4, length 7): " << sub << endl;

    // 4. Searching
    size_t found = str.find("Prog");
    if (found != string::npos) {
        cout << "'Prog' found at index: " << found << endl;
    }

    // 5. Accessing characters
    cout << "Character at index 0: " << str[0] << endl;
    
    // Modifying a character
    str[0] = 'c';
    cout << "Modified string: " << str << endl;

    return 0;
}
