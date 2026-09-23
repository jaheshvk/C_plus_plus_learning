#include <iostream>
using namespace std;

int main() {
    int spaces = 4;
    int stars = 1;

    for (int row = 1; row <= 5; row++) {
        
        for (int i = 1; i <= spaces; i++) {
            cout << " ";
        }
        
        for (int i = 1; i <= stars; i++) {
            cout << "*";
        }
        
        cout << endl;
        spaces --;
        stars += 2;
    }
    return 0;
}
