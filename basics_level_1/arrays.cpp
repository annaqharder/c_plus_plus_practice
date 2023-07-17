#include <iostream>

int main() {
    // initialized array with 4 elements
    double temperature_list[4] = {34.5, 27.8, 26.8, 22.0};

    // modifying an element
    temperature_list[3] = 15.4;

    // access a specific element
    std::cout << temperature_list[1] << std::endl;

    return 0;

}