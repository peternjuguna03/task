
// Question 4: Capitalize Words
// Write a program that accepts a string as input, capitalizes the first letter of each word in the 
// string, and then returns the result string.

#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <sstream>

int main() {
    std::string myName = "samuel mwangi";

    // Split the sentence into an array of words
    std::vector<std::string> words;
    std::string word;
    std::istringstream iss(myName);
    while (iss >> word) {
        words.push_back(word);
    }

    // Capitalize the first letter of each word
for (size_t i = 0; i < words.size(); ++i) {
    if (!words[i].empty()) {
        words[i][0] = std::toupper(words[i][0]);
    }
}

    // Join the words back into a string
    std::string nameCapitalized;
    for (size_t i = 0; i < words.size(); ++i) {
        nameCapitalized += words[i];
        if (i != words.size() - 1) {
            nameCapitalized += " ";
        }
    }

    std::cout << nameCapitalized << std::endl; // prints Samuel Mwangi

    return 0;
}

