/*Polymorphism in CPP */
//compile time polymorphism: function overloading

#include <iostream>

class Robot
{
    public:
        void move(int speed)
        {
            std::cout << "Robot moving at " << speed << "m/s\n";
        }
        void move(int speed, int direction)
        {
            std::cout << "Speed: " << speed << "m/s\n";
            std::cout << "Direction: " << direction << "\n";

        }

    void move(int speed, int direction, int duration)
    {
        std::cout << "Speed: " << speed << "m/s\n";
        std::cout << "Direction: " << direction << "\n";
        std::cout << "Duration: " << duration << "s\n";
    }
};


int main()
{
    Robot r1;           //created a object of class Robot names r1.
    r1.move(50);        //function with 1 parameter
    r1.move(50, 90);    //function with 2 parameters
    r1.move(50, 90, 10); //function with 3 parameters

    return 0;
}