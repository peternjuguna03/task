
// Write a program that prints the numbers from 1 to 100. For multiples of 3, print "Fizz"; for 
//  multiples of 5, print "Buzz"; and for numbers that are multiples of both 3 and 5, print "FizzBuzz".

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> arrayNums;

    for(int i = 0; i <= 100; i++) {
        // check if the number is a multiple of three
        if(i % 3 == 0) {
            arrayNums.push_back("Fizz");
        } else if(i % 5 == 0) { // checking if a number is a multiple of 5
            arrayNums.push_back("Buzz");
        } 
        if(i % 3 == 0 && i % 5 == 0) {
            arrayNums.push_back("FizzBuzz");
        }
    }

    for(int i = 0; i < arrayNums.size(); ++i) {
        cout << arrayNums[i] << " ";
    }

    cout << endl;

    return 0;
}

