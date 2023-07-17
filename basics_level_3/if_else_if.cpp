#include <iostream>
#include <vector>

using namespace std;

int main() {
    // use this line to get "true" & "false" in terminal
    cout << boolalpha;

    // cout << true << endl;
    // cout << false << endl;

    // cout << (1 != 2) << endl;
    // cout << ((1 == 1) || (3 == 4)) << endl;
    // cout << ((1 == 1) && (3 == 4)) << endl;

    // double temperature = 35.0;

    // cout << ((temperature >= 20.0) && (temperature < 30.0)) << endl;

    int user_age = 31;

    if(user_age < 18) {
        cout << "You're not an adult yet." << endl;
    } else if ((user_age >= 18) && (user_age < 30)) {
        cout << "You are " << user_age << ". You're officially an adult." << endl;
    } else {
        cout << "You are an adult above 30." << endl;
    }

    cout << "End of program" << endl;

    return 0;
}