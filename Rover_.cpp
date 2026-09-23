#include <iostream>
#include <string>

struct Position {
    float x;
    float y;
    float z;
};

struct Rover {
    std::string ;
    int id;
    Position pos;
};

void printRoverDetails(const Rover& r) {
    std::cout << "=== Rover Details ===\n";
    std::cout << "Name: " << r.name << "\n";
    std::cout << "ID: " << r.id << "\n";
    std::cout << "Position (X, Y, Z): (" << r.pos.x << ", " << r.pos.y << ", " << r.pos.z << ")\n";
    std::cout << "---------------------\n";
}

void updateRoverPosition(Rover& r, float newX, float newY, float newZ) {
    r.pos.x = newX;
    r.pos.y = newY;
    r.pos.z = newZ;
}

int main()

{
    struct Position p1 = {2.44,3.56, 6.78};
    

    Rover myRover = {"Luci", 101, {0.0, 0.0, 0.0}};
    Rover anotherRover = {"Max", 102, {5.0, 10.0, 15.0}};

    std::cout << "Initial State:\n";
    printRoverDetails(myRover);
    printRoverDetails(anotherRover);

    updateRoverPosition(myRover, 14.5, -23.8, 8.2);
    updateRoverPosition(anotherRover, -5.0, 12.0, 3.5);

    std::cout << "After Position Update:\n";
    
    printRoverDetails(myRover);
}