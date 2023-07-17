#include <iostream>

int main() {
    std::string user_name;

    std::cout << "What is your name? ";
    
    // what we get from terminal
    std::cin >> user_name;

    std::cout << user_name << std::endl;

    return 0;
}