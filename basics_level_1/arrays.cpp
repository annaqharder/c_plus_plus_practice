#include <iostream>

    // arrays are NOT DYNAMIC
// int main() {
//     // initialized array with 4 elements
//     double temperature_list[4] = {34.5, 27.8, 26.8, 22.0};

//     // modifying an element
//     temperature_list[3] = 15.4;

//     // access a specific element
//     std::cout << temperature_list[1] << std::endl;

//     return 0;

// }

#include <vector>

int main() {
    // declaring the vector w/ 3 elements
    std::vector<double> temperatures = {34.5, 27.8, 26.8};

    // access specific element in a vector
    std::cout << temperatures.at(0) << std::endl;

    // modifying an element in a vector
    std::cout << temperatures.at(1) << std::endl;
    temperatures.at(1) = 30.7;
    std::cout << temperatures.at(1) << std::endl;

    // print size of vector
    std::cout << temperatures.size() << std::endl;

    // add element to end of vector
    temperatures.push_back(17.4);
    std::cout <<temperatures.size() << std::endl;

    return 0;
}