// File: Person.h
// Author: Kaohulani Palakiko
// Date: 05/06/2024
// Description: This header file defines the Person class, which represents a person with basic information

#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
protected:
    std::string name;
    int age;

public:
// Constructor 
    Person(const std::string& name, int age);
    virtual ~Person() {} // Virtual destructor 

    virtual void displayInfo() const; // Virtual function to display person information 

// Function to display person information with an additional number
    void displayInfo(int num) const;

    // Getter functions for name and age
    std::string getName() const { return name; }
    int getAge() const { return age; }
};

#endif // PERSON_H
