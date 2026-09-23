#include <iostream>

enum RobotState
{
    IDLE,
    MOVING,
    STOPPED,
    ERROR,
};

int main()
{
    RobotState state = MOVING;

    switch(state)
    {
        case IDLE:
            std::cout << "Robot is idle.\n";
            break;
        case MOVING:
            std::cout << "Robot is Moving.\n";
            break;
        case STOPPED:
            std::cout << "Robot has stopped.\n";
            break;
        case ERROR:
            std::cout << "Robot has encountered an error.\n";
            break;
    }
    return 0;
}