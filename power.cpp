
// Write a program that takes an integer as input and returns true if the input is a power of two.

#include <iostream>

using namespace std;

bool checkPower(int num) {
    if (num > 0 && ((num & (num - 1)) == 0)) { // condition to check if a number is a power of two
        return true;
    } else {
        return false;
    }
}

int main() {
    if (checkPower(16)) {
        cout << "true" << endl; // prints true
    } else {
        cout << "false" << endl;
    }

    return 0;
}

