#include <iostream>
using namespace std;

int main() {
    int current_Number=1;
    int total_rows=14;
    for (int row=1; row<=total_rows; row++) {
        for (int col=1; col<=row; col++) {
            if (current_Number<=104) {
                cout<<current_Number<<" ";
                current_Number++;
            }
        }
        cout<<endl;
    }

    return 0;
}