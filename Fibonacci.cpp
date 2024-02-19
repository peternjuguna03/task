


#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> holdNums;
    int first = 0;
    int second = 1;
    int Fibonacci;

    cout << first << endl; // printing the first number

    while (second <= 100) {
        Fibonacci = first + second; // sequence to add the numbers as we loop through to a 100
        first = second; // the number in the second position is initialized to be the first
        second = Fibonacci;

        holdNums.push_back(Fibonacci); // add the numbers in a vector
    }

    for (int i = 0; i < holdNums.size(); ++i) {
    cout << holdNums[i] << " ";
}

    cout << endl;

    return 0;
}

