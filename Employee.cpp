// File: Employee.cpp
// Author: Kaohulani Palakiko
// Date: 05/06/2024
// Description: This file contains the implementation of the Employee class.

#include "Employee.h"
#include <iostream>

// Constructor implemetation
Employee::Employee(const std::string& name, int age, const std::string& department)
    : Person(name, age), department(department) {}

// Display information of the employee
void Employee::displayInfo() const {
    std::cout << "Employee - ";
    Person::displayInfo(); // Call base class displayInfo()
    std::cout << "Department: " << department << std::endl;
}
