// File: Employee.h
// Author: Kaohulani Palakiko
// Date: 05/06/2024
// Description: This header file defines the Employee class, which is a derived class from the Person class.

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "Person.h"

class Employee : public Person {
private:
    std::string department;

public: // Constructor 
    Employee(const std::string& name, int age, const std::string& department);

// Member function to display employee information
    void displayInfo() const; 
};

#endif // EMPLOYEE_H
