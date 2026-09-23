#include <iostream>
#include <string>

struct Position {
    float x;
    float y;
    float z;
};

int main()

{
    struct Position p1 = {2.44,3.56, 6.78};
    struct Position p2{};
    struct Position p3{0.0, 0.0, 0.0};

    std::cout << "Position 1: (" << p1.x << ", " << p1.y << ", " << p1.z << ")" << std::endl;
    std::cout << "Position 2: (" << p2.x << ", " << p2.y << ", " << p2.z << ")" << std::endl;
    std::cout << "Position 3: (" << p3.x << ", " << p3.y << ", " << p3.z << ")" << std::endl;
}