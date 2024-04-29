#include <iostream>
#include <fstream>
#include <vector>
#include "Person.h"
#include "Student.h"
#include "Employee.h"
#include "Library.h"

// Function to read data from the text file and display it
void readAndDisplayFromFile(std::vector<std::string>& fileContents) {
    std::ifstream inputFile("output.txt");
    if (inputFile.is_open()) {
        std::cout << "Contents of file:" << std::endl;
        std::string line;
        while (std::getline(inputFile, line)) {
            std::cout << line << std::endl;
            fileContents.push_back(line);
        }
        inputFile.close();
    } else {
        std::cerr << "Unable to open file." << std::endl;
    }
}

// Function to write data to the text file
void writeToTextFile(const std::vector<std::string>& fileContents) {
    std::ofstream outputFile("output.txt");
    if (outputFile.is_open()) {
        for (const auto& line : fileContents) {
            outputFile << line << std::endl;
        }
        std::cout << "Data written to file." << std::endl;
        outputFile.close();
    } else {
        std::cerr << "Unable to open file." << std::endl;
    }
}

int main() {
    const int arraySize = 3; // Define the size of the array
    std::vector<std::string> fileContents;

    // Read existing data from the text file and display it
    readAndDisplayFromFile(fileContents);

    std::string name, department, major;
    int age;

    // Array to store pointers to Person, Student, and Employee objects
    Person* people[arraySize];

    // Prompt user for new data
    name = Library::getString("Enter user's name: ");
    age = Library::getInt("Enter age: ");
    fileContents.push_back("Name: " + name + ", Age: " + std::to_string(age));
    people[0] = new Person(name, age);

    // Prompt user for student data
    name = Library::getString("Enter student name: ");
    age = Library::getInt("Enter student age: ");
    major = Library::getString("Enter student major: ");
    fileContents.push_back("Student - Name: " + name + ", Age: " + std::to_string(age) + ", Major: " + major);
    people[1] = new Student(name, age, major);

    // Prompt user for employee data
    name = Library::getString("Enter employee name: ");
    age = Library::getInt("Enter employee age: ");
    department = Library::getString("Enter employee department: ");
    fileContents.push_back("Employee - Name: " + name + ", Age: " + std::to_string(age) + ", Department: " + department);
    people[2] = new Employee(name, age, department);

    // Write updated data to the text file
    writeToTextFile(fileContents);

    // Display information of each person
    for (int i = 0; i < arraySize; ++i) {
        people[i]->displayInfo();
        delete people[i]; // Free memory
    }

    return 0;
}
