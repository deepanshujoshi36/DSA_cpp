#include <iostream>
using namespace std;

void printSShape(int size) {
    for (int i = 0; i < size; ++i) {
        if (i == 0 || i == size / 2 || i == size - 1) {
            // Print the full row for the top, middle, and bottom
            for (int j = 0; j < size; ++j) {
                cout << "*";
            }
        } else if (i < size / 2) {
            // Print one star at the beginning of the row
            cout << "*";
        } else {
            // Print one star at the end of the row
            for (int j = 0; j < size - 1; ++j) {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
}
       
int main() {
    int size;
    cout << "Enter the size of the S pattern (odd number recommended): ";
    cin >> size;

    if (size < 3) {
        cout << "Size must be at least 3." << endl;
    } else {
        printSShape(size);
    }

    return 0;
}

// *******
// *
// *
// *******
//       *
//       *
// *******
