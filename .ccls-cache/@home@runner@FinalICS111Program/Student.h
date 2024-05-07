// File: Student.h
// Author: Kaohulani Palakiko
// Date: 05/06/2024
// Description: This header file defines the Student class, which represents a student with basic information

#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"

class Student : public Person {
private:
    std::string major;

public:
// Constructor
    Student(const std::string& name, int age, const std::string& major);

// Override dislayInfo function to display student information
    void displayInfo() const override;
};

#endif // STUDENT_H
