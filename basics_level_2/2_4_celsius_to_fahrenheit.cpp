#include <iostream>

using namespace std;

double celsius_to_fahrenheit(double celsius_degrees) {
    return celsius_degrees * 1.8 + 32.0;
}

double temperature = 15.6;

int main(){
    cout << temperature << "C = " << celsius_to_fahrenheit(temperature) << "F" << endl;
    return 0;
}