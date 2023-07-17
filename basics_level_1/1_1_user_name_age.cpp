#include <iostream>

int main() 
{
    std::string user_name;
    int user_age;

    std::cout << "What is your name? ";
    std::cin >> user_name;
    std::cout << "What is your age? ";
    std::cin >> user_age;

    std::cout << "Hello " << user_name << ", you are " << user_age << "." << std::endl;


    return 0;
}