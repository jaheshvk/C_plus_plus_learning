#include <iostream>
#include <string>

class Robot {
public:
    std::string name;
    int x, y, z;
    int battery;

    Robot(std::string n, int xcord, int ycord, int zcord, int batteryLevel)
        : name(n), x(xcord), y(ycord), z(zcord), battery(batteryLevel) {
        std::cout << "Robot Created\n";
    }

    void display() const {
        std::cout << "Robot name is " << name << "\n";
        std::cout << "Robot x coordinate is " << x << "\n";
        std::cout << "Robot y coordinate is " << y << "\n";
        std::cout << "Robot z coordinate is " << z << "\n";
        std::cout << "Robot battery " << battery << "%\n";
    }
};

int main() {
    Robot robot1("Bot", 2, 3, 5, 50);
    robot1.display();
    return 0;
}