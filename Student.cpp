// File: Student.cpp
// Author: Kaohulani Palakiko
// Date: 05/06/2024
// Description: This file contains the implementation of the Student class.

#include "Student.h"
#include <iostream>

// Constructor implementation
Student::Student(const std::string& name, int age, const std::string& major)
    : Person(name, age), major(major) {}

// Display information of the student 
void Student::displayInfo() const {
    std::cout << "Student - ";
    Person::displayInfo(); // Call base class displayInfo()
    std::cout << "Major: " << major << std::endl;
}
