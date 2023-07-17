#include <iostream>

using namespace std;

   //// FOR LOOP --> use when you know when to end the loop (how many times)
// int main() {
//     for (int i = 0; i < 10; i++) {
//         cout << "Hello" << i << endl;
//     }

//     return 0;
// }

    // WHILE LOOP --> you don't know when to end the loop
int main() {
    int i = 0;
    while(i < 10) {
        cout << "Hello" << i << endl;
        i++;
    }

    return 0;
}