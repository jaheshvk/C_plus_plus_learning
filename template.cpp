#include <iostream>
#include <string>

template <typename T>
void Value(T value) {
    std::cout << " Value: " << value << std::endl;
}

int main() {

        int intvar = 42;
        double doublevar = 3.14159;
        char charvar = 'A';
        std::string stringvar = "Hello";

    Value(intvar);
    Value(doublevar);
    Value(charvar);
    Value(stringvar);

    return 0;
}
