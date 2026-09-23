#include <iostream>

int main() {
    int numbers[] = {10, 20, 30, 40, 50};

    std::cout << "Original array: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }

    for (int &num : numbers) {  
        num += 5;  
    }

    std::cout << "Updated array: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}
