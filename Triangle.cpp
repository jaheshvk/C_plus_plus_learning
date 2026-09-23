#include <iostream>
using namespace std;

int main() {
    int spaces = 4;
    int stars = 1;

    for (int row = 1; row <= 5; row++) {
        // Print secret invisible spaces to push the tree to the middle
        for (int i = 1; i <= spaces; i++) {
            cout << " ";
        }
        // Print the tree leaves
        for (int j = 1; j <= stars; j++) {
            cout << "*";
        }
        cout << endl;
        spaces--;   // Need fewer spaces on the next row
        stars += 2; // Add two more stars to make it wider!
    }
    return 0;
}