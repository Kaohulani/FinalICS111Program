#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
protected:
    std::string name;
    int age;

public:
    Person(const std::string& name, int age);
    virtual ~Person() {} // Virtual destructor for polymorphism

    virtual void displayInfo() const; // Make it virtual

    void displayInfo(int num) const; // Overloaded function

    // Getter functions for name and age
    std::string getName() const { return name; }
    int getAge() const { return age; }
};

#endif // PERSON_H
