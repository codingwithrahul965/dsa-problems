#include <iostream>
#include <vector>
#include <algorithm> // Required for std::sort

using namespace std;

// Function to print a vector
void printVector(const vector<int>& v) {
    for(int x : v) cout << x << " ";
    cout << endl;
}

int main() {
    vector<int> numbers = {50, 10, 40, 20, 30};

    cout << "Original Vector: ";
    printVector(numbers);

    // 1. Sorting in Ascending Order (Default)
    sort(numbers.begin(), numbers.end());
    cout << "Sorted (Ascending): ";
    printVector(numbers);

    // 2. Sorting in Descending Order
    sort(numbers.begin(), numbers.end(), greater<int>());
    cout << "Sorted (Descending): ";
    printVector(numbers);

    // 3. Binary Search (Requires sorted array)
    sort(numbers.begin(), numbers.end());
    int key = 20;
    if(binary_search(numbers.begin(), numbers.end(), key)) {
        cout << key << " exists in the vector." << endl;
    }

    return 0;
}
