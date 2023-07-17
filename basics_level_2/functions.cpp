#include <iostream>

namespace abc {
    int triple_number(int number) {
        return number * 3;
    }
};

using namespace std;

// "a" is a GLOBAL VARIABLE, can be accessed anywhere
int a;

void print_triple_number(int number) {
    a = 3;
    cout << abc::triple_number(number) << endl;
}

void say_hello(string user_name, int user_age) {
    cout << "Hello, " << user_name << ", you are " << user_age << endl;
}


int main() {
    a = 4;
    say_hello("Anna", 24);
    say_hello("John", 32);
    say_hello("Stacy", 26);

    // int result = triple_number(4);
    // std::cout << result << std::endl;

    print_triple_number(4);

    {
        a = 6;
    }

    return 0;

}