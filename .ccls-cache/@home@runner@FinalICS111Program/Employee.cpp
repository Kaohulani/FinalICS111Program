#include "Employee.h"
#include <iostream>

Employee::Employee(const std::string& name, int age, const std::string& department)
    : Person(name, age), department(department) {}

void Employee::displayInfo() const {
    std::cout << "Employee - ";
    Person::displayInfo();
    std::cout << "Department: " << department << std::endl;
}
