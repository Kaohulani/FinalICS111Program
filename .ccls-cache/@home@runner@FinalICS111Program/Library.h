// File: Library.h
// Author: Kaohulani Palakiko
// Date: 05/06/2024
// Description: This header file defines the Library class, which is a derived class from the Person class.

#ifndef LIBRARY_H
#define LIBRARY_H

#include <string>

// Function declarations for getting user input 
namespace Library {
    std::string getString(const std::string& prompt);
    int getInt(const std::string& prompt);
    float getFloat(const std::string& prompt);
}

#endif // LIBRARY_H
