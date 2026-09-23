 #include <iostream>

void NumberSeries(int limit) {
    if (limit < 0) {
        std::cout << std::endl;
        return;
    }
    for (int i = 1; i <= limit; ++i) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

int main() {
    int Input;
    std::cout << "Enter a number: ";
    if (std::cin >> Input) {
        NumberSeries(Input);
    } else {
        std::cout << "invalid input" << std::endl;
    }

    return 0;
}