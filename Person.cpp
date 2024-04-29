#include "Person.h"
#include <iostream>

Person::Person(const std::string& name, int age) : name(name), age(age) {}

void Person::displayInfo() const {
    std::cout << "Name: " << name << ", Age: " << age << std::endl;
}

void Person::displayInfo(int num) const {
    std::cout << "Name: " << name << ", Age: " << age << ", Num: " << num << std::endl;
}
