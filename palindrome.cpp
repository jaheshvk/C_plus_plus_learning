#include <iostream>

int main() {

    int i, orig, rev = 0;
    std::cout << "Enter no \n";
    std::cin >> i;
    orig = i;
    while (i > 0) {
        rev = (rev * 10) + i % 10;
        i = i / 10;
    }

    if (orig == rev)
        std::cout << "Palindrome \n";
    else
        std::cout << "Not Palindrome \n";

    return 0;


}