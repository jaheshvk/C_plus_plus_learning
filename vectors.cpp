#include <iostream>
#include <vector>

int main()
{
    std::vector<int> myVector = {1, 2, 3, 4, 5};

    for (auto i = myVector.begin(); i != myVector.end(); ++i) {
        std::cout << *i << " ";
    }

    return 0;

}
    
