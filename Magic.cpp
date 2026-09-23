#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    // 0 = black background, 2 = green text
    system("color 02");

    int spaces = 4;
    int stars = 1;

    for (int row = 1; row <= 5; row++) {
        for (int i = 1; i <= spaces; i++) {
            cout << " ";
        }
        for (int j = 1; j <= stars; j++) {
            cout << "*";
        }
        cout << endl;
        spaces--;
        stars += 2;
    }

    cout << "    ||" << endl;
    cout << "    ||" << endl;

    return 0;
}
