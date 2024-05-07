// File: Library.cpp
// Author: Kaohulani Palakiko
// Date: 05/06/2024
// Description: This file contains the implementation of the Library class.

#include "Library.h"
#include <iostream>
#include <limits>

namespace Library {
  // Function to get a string input from the user
    std::string getString(const std::string& prompt) {
        std::string input;
        std::cout << prompt;
        std::getline(std::cin, input);
        return input;
    }
// Function to get an integer input from the user
    int getInt(const std::string& prompt) {
        int input;
        std::cout << prompt;
        while (!(std::cin >> input)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input. Please enter an integer: ";
        }
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return input;
    }

// Function to get a float input from the user
    float getFloat(const std::string& prompt) {
        float input;
        std::cout << prompt;
        while (!(std::cin >> input)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input. Please enter a float: ";
        }
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return input;
    }
}
