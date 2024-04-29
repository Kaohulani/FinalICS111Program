#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"

class Student : public Person {
private:
    std::string major;

public:
    Student(const std::string& name, int age, const std::string& major);

    void displayInfo() const override;
};

#endif // STUDENT_H
