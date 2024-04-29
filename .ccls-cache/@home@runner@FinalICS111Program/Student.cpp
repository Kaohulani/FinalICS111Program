#include "Student.h"
#include <iostream>

Student::Student(const std::string& name, int age, const std::string& major)
    : Person(name, age), major(major) {}

void Student::displayInfo() const {
    std::cout << "Student - ";
    Person::displayInfo();
    std::cout << "Major: " << major << std::endl;
}
