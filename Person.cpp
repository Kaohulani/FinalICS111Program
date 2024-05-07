// File: Person.cpp
// Author: Kaohulani Palakiko
// Date: 05/06/2024
// Description: This file contains the implementation of the Person class.

#include "Person.h"
#include <iostream>

// Constructor implementation
Person::Person(const std::string& name, int age) : name(name), age(age) {}

// Display information of the person
void Person::displayInfo() const {
    std::cout << "Name: " << name << ", Age: " << age << std::endl;
}

// Display information of the person with an additional number 
void Person::displayInfo(int num) const {
    std::cout << "Name: " << name << ", Age: " << age << ", Num: " << num << std::endl;
}
