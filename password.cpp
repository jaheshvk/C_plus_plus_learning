#include <iostream>
int main()
{
    int password, count = 0;

    std::cout << "Password: ";
    std::cin >> password;

    while(password != 1234 && count < 5)
    {
        count++;
        std::cout << "Wrong password! You have " << 5-count << " attempts left.\n";
        std::cout << "Password: ";
        std::cin >> password;
    }

    if(password == 1234)
    {
        std::cout << "Access Granted!\n";
    }
    else
    {
        std::cout << "You have been blocked!\n";
    }
}