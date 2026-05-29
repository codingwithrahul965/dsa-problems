#include <iostream>
#include <stack>
#include <queue>
#include <map>
#include <unordered_map>
#include <set>

using namespace std;

int main() {
    // 1. Stack (LIFO: Last In First Out)
    stack<int> s;
    s.push(10);
    s.push(20);
    cout << "Stack Top: " << s.top() << endl; // 20

    // 2. Queue (FIFO: First In First Out)
    queue<string> q;
    q.push("First");
    q.push("Second");
    cout << "Queue Front: " << q.front() << endl; // First

    // 3. Map (Key-Value Store, Ordered)
    map<string, int> ageMap;
    ageMap["Rahul"] = 25;
    ageMap["Alice"] = 22;
    cout << "Rahul's Age: " << ageMap["Rahul"] << endl;

    // 4. Set (Unique elements, Ordered)
    set<int> uniqueNumbers;
    uniqueNumbers.insert(5);
    uniqueNumbers.insert(10);
    uniqueNumbers.insert(5); // Duplicate, will not be added
    cout << "Set Size: " << uniqueNumbers.size() << endl; // 2

    return 0;
}
