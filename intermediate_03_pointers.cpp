#include <iostream>

using namespace std;

int main() {
    int var = 20;
    
    // 1. Pointer Basics
    int* ptr = &var; // ptr stores the address of var

    cout << "Value of var: " << var << endl;
    cout << "Address of var (&var): " << &var << endl;
    cout << "Value in ptr: " << ptr << endl;
    cout << "Value dereferenced (*ptr): " << *ptr << endl;

    // 2. Modifying value through pointer
    *ptr = 100;
    cout << "New value of var: " << var << endl;

    // 3. References
    int& ref = var; // ref is an alias for var
    ref = 500;
    cout << "Value of var after ref change: " << var << endl;

    // 4. Dynamic Memory Allocation
    int* dPtr = new int; // Allocate memory on heap
    *dPtr = 75;
    cout << "Heap value: " << *dPtr << endl;

    delete dPtr; // Deallocate memory (VERY IMPORTANT)
    dPtr = nullptr; // Reset to avoid dangling pointer

    return 0;
}
