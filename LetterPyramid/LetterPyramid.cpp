// LetterPyramid.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main()
{
    std::string pyramidInput{};
    std::cout << "Please enter the text to use for the pyramid: " << std::endl;
    std::getline(std::cin, pyramidInput);

    size_t inputAmount = pyramidInput.length();

    int position{ 0 };

    // for each letter in the string
    for (char c : pyramidInput) {
    //inside the loop have another loop that measures the length of the getline and then prints the number of spaces equal to the characters minus i, starting with 1 and then reducing the amount of spaces
    //within the same line of spaces it should print characters from the get line, starting with the 1st character and then increasing the amount as it loops and changes lines
    // the first line should print out the total amount of characters minus one and add the first character of the getline, then increase characters and reduce spaces
        size_t spaceAmount = inputAmount - position;
        while (spaceAmount > 0) {
            std::cout << " ";
            --spaceAmount;
        }
        // Display in order up to the current character
        for (size_t i = 0; i < position; i++) {
            std::cout << pyramidInput.at(i);
        }
        // Display the current middle character
        std::cout << c;

        // Display the remaining characters in reverse order
        for (int i= position - 1; i >= 0; --i) {
            // Using this line to get rid of the size_t vs int warning if you want
            auto k = static_cast<size_t>(i);
            std::cout << pyramidInput.at(k);
        }

        std::cout << std::endl;
        ++position;
    }
    return 0;
}