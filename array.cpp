#include <iostream>
#include <array>

int main()
{

    std::array < int, 5 > sensorvalue = {11, 232, 34, 46, 55};
    std::cout << sensorvalue[1] << std::endl;
    std::cout << sensorvalue[2] << std::endl;
    std::cout << sensorvalue[4] << std::endl;

    std::cout << sensorvalue.at(1) << std::endl;
    std::cout << sensorvalue.at(3) << std::endl;
    //std::cout << sensorvalue.at(5) << std::endl;

    std::cout << sensorvalue.front() << std::endl;
    std::cout << sensorvalue.back() << std::endl;
    std::cout << sensorvalue.size() << std::endl;
    std::cout << sensorvalue.empty() << std::endl;
    std::cout << sensorvalue.data() << std::endl;
    //std::cout << sensorvalue.fill(0) << std::endl;
    
    
}