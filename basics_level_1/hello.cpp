#include <iostream>

// int main()
// {
//     // 1) declaring a variable
//     int a;
//     int temperature;
//     int user_age;
//     // 2) initializing the variable
//     a = 2;

//     // declare & initialize variable at the same time
//     int b = a + 3; 

//     std::cout << b << std::endl;

//     return 0;
// }

int main()
{
    // integer
    int user_age = 34;

    // float 
    double temperature = 20.6;

    // boolean; false = 0; true = 1
    bool is_alive = false;

    // string
    std::string user_name = "Bob";
    
    // constant variable w/ "const" keyword --> variable cannot be changed
        // must declare AND initialize constant variable at the same time
    const int seconds_per_hour = 3600;
    const double max_allowed_temp = 76.8;

    std::cout << user_age << std::endl;
    std::cout << temperature << std::endl;
    std::cout << is_alive << std::endl;
    std::cout << user_name << std::endl;

    return 0;
}