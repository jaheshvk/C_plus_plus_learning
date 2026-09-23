#include <iostream>

int main() {
    int n;

    std::cout << "Enter a positive integer: ";
    std::cin >> n;

    // For loop runs 10 times to calculate the table
    for (int i = 1; i <= 10; ++i) {
        std::cout << n << " * " << i << " = " << n * i << std::endl;
    }

    return 0;
}
