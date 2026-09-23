#include <iostream>
#include <string>

class Robo
{
public:
    std::string name;
    int x, y;
    int battery;

    void printPosition()
    {
        std::cout << name << " is at position (" << x << ", " << y << ")" << std::endl;
        
    }

    void batteryStatus()
    {
        std::cout << name << " has battery level: " << battery << "%" << std::endl;
    }

    
};
int main()
{
    Robo robot1;
    robot1.name = "Robo1";
    robot1.x = 2;
    robot1.y = 3;
    robot1.battery = 100;
    robot1.printPosition();
    robot1.batteryStatus();

    Robo robot2;
    robot2.name = "Robo2";
    robot2.x = 5;
    robot2.y = 7;
    robot2.battery = 80;
    robot2.printPosition();
    robot2.batteryStatus();

    return 0;
}
