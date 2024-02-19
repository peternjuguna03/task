
// Write a program that counts the number of vowels in a sentence.

#include <iostream>
#include <string>
#include <cctype>

int loopString(std::string word) {
    int charCount = 0;
    const std::string vowels = "aeiou";

   for (size_t i = 0; i < word.length(); ++i) {
    char lowerCaseChar = std::tolower(word[i]);

    if (vowels.find(lowerCaseChar) != std::string::npos) {
        charCount++;
    }
}


    return charCount;
}

int main() {
    std::cout << loopString("PETER keru") << std::endl; // prints 4
    return 0;
}

