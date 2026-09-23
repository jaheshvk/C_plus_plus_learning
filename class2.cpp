#include <iostream>
#include <string>

class Drone
{
public:
    std::string name;
    std::string direction;
    int x;
    int y;
    int z;
    int batt;

    void move()
    {
        std::cout << " Direction  " << direction << std::endl;
    }

    void position()
    {
        std::cout << "x position = " << x << std::endl;
        std::cout << "y position = " << y << std::endl;
        std::cout << "z position = " << z << std::endl;
    }

    void battery()
    {
        std::cout << " Battery % = " << batt << std::endl;
    }
};

int main()
{
    Drone max;
    max.name = "MAX";
    max.direction = " Moving UP & FORWARD";
    max.x = 2;
    max.y = 0;
    max.z = 10;
    max.batt = 100;

    max.move();
    max.position();
    max.battery();

    return 0;
}