#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "Person.h"

class Employee : public Person {
private:
    std::string department;

public:
    Employee(const std::string& name, int age, const std::string& department);

    void displayInfo() const; // Remove 'override'
};

#endif // EMPLOYEE_H
