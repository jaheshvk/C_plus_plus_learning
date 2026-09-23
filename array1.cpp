#include <iostream>
#include <array>

int main()
{

    std::array<int, 5> myArray = {1, 2, 3, 4, 5};

    std::cout << "Elements in the array: ";
    for (const auto& element : myArray)
    {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
    
    
}