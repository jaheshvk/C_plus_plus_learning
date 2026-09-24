/*Race Condition*/
#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>

int counter = 0;

std::mutex mtx;

void update()
{
    for(int i = 0; i < 100000; ++i)
    {
        std::lock_guard<std::mutex> lock(mtx);

        counter++;
    }
}

int main()
{
    std::thread t1(update);
    std::thread t2(update);


    t1.join();
    t2.join();


    std::cout << "Final Counter Value: " << counter << std::endl;

    return 0;


}