#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // 1. Static Array: Fixed size, allocated on stack
    int staticArray[5] = {10, 20, 30, 40, 50};
    
    cout << "Static Array Elements:" << endl;
    for(int i = 0; i < 5; i++) {
        cout << "Element at index " << i << ": " << staticArray[i] << endl;
    }

    // 2. Vectors (Dynamic Arrays): Can resize, part of STL
    vector<int> numbers;
    
    // Adding elements
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    
    cout << "\nVector Elements (after push_back):" << endl;
    for(int num : numbers) { // Range-based for loop
        cout << num << " ";
    }
    cout << endl;

    // Common vector operations
    cout << "Vector Size: " << numbers.size() << endl;
    cout << "First Element: " << numbers.front() << endl;
    cout << "Last Element: " << numbers.back() << endl;

    // Removing the last element
    numbers.pop_back();
    cout << "Size after pop_back: " << numbers.size() << endl;

    return 0;
}
