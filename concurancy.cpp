#include <iostream>
#include <thread> 
#include <chrono> 

//sensor task function
void sensorTask() {
    for(int i = 0; i < 5 ; ++i) {
        std::cout << "Reading Sensor...\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }
}

//motor task function
void motorTask() {
    for(int i = 0; i < 5; ++i) {
        std::cout << "Controlling Motor...\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }
}

//battery task function
void batteryTask() {
    for(int i = 0; i < 5; ++i) {
        std::cout << "Monitoring Battery...\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }
}

int main() {
    std::thread sensorThread(sensorTask); 
    std::thread motorThread(motorTask);   
    std::thread batteryThread(batteryTask); 

    // DETACH: Battery monitoring runs independently in the background
    batteryThread.detach(); 
    std::cout << "Battery monitor started in the background.\n";

    // JOIN: The main program actively waits for these two tasks to finish
    sensorThread.join();
    motorThread.join();

    std::cout << "Critical robot tasks (Sensor & Motor) completed. Exiting program.\n";
    return 0;
}
