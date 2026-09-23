#include <iostream>
#include <vector>

int main()
{
    std::vector<int> myVector = {1, 2, 3, 4, 5};

    //std::cout << "Size of the vector: " << myVector.size() << std::endl;

    //std::cout << "Elements in the vector: ";

    //myVector.push_back(6);
    //myVector.clear();
    for (const auto& element : myVector)
    {
        std::cout << element << " ";
    }

    for (auto it = myVector.begin(); it != myVector.end(); ++it) {
   
    std::cout << *it << " ";
}

    return 0;
}

}
    
