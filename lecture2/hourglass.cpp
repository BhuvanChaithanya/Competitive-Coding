#include <iostream>
using namespace std;

int main() {
    int rows = 5;

    // Upper part of diamond
    for (int i = 0; i < rows; i++) {
        // Print spaces
        for (int j = 0; j < rows - i - 1; j++) {
            cout << " ";
        }
        // Print stars
        for (int k = 0; k < 2 * i + 1; k++) {
            cout << "*";
        }
        cout << "\n";
    }

    // Lower part of diamond
    for (int i = rows - 2; i >= 0; i--) {
        // Print spaces
        for (int j = 0; j < rows - i - 1; j++) {
            cout << " ";
        }
        // Print stars
        for (int k = 0; k < 2 * i + 1; k++) {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}
