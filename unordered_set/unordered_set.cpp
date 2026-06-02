#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    
    unordered_set<int> us;

    // Insert elements
    us.insert(10);
    us.insert(20);
    us.insert(30);

    // Print elements
    for (int x : us) {
        cout << x << " ";
    }
    cout << endl;

    // Search element
    if (us.find(20) != us.end()) {
        cout << "20 found" << endl;
    } else {
        cout << "20 not found" << endl;
    }

    // Remove element
    us.erase(20);

    // Check size
    cout << "Size: " << us.size() << endl;

    // Check if empty
    if (us.empty()) {
        cout << "Set is empty" << endl;
    } else {
        cout << "Set is not empty" << endl;
    }

    return 0;
}
