#include <iostream>

//parent or Base Class
class Robot
{
    protected:
        int robotID;
        int battery;

    public:
        Robot(int id) //initialization using constructor
        {
            robotID = id;
            battery = 100;
        }
        void powerOn()
        {
            std::cout << "Robot Powering up...\n";
        }
        void powerOff()
        {
            std::cout << "Robot Shutting down...\n";
        }

        void showBattery()
        {
            std::cout << "Battery: " << battery << "%" << std::endl;   
        }
};
//child class or derived class
class Humanoid : public Robot
{
    public:
        Humanoid(int id) : Robot(id)
        {
            
        }
        void run()
        {
            if (battery > 10)
            {
                std::cout << "Humanoid " << robotID << " is now running.\n";
                battery -= 10;
            }
            else
            {
                std::cout << "Humanoid " << robotID
                          << " doesn't have enough battery to run.\n";
            }
        }
        void walk()
        {
            std::cout << "Humanoid is Walking...\n";
        }
};

int main()
{
    Humanoid humanoid(101);
    humanoid.powerOn();
    humanoid.run();
    humanoid.walk();
    humanoid.showBattery();
    humanoid.powerOff();
    
    return 0;

}
