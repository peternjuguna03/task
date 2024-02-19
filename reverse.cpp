
// Write a program that takes an integer as input and returns an integer with reversed digit ordering.

#include <iostream>

int reverse(int num) {
    int remainder;
    int reversedNum = 0;

    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num = num / 10;
    }

    return reversedNum;
}

int main() {
    std::cout << reverse(321) << std::endl; // prints 123
    return 0;
}

