#include "Employee.h" 
#include <iostream>

// Define the Employee class methods.

// Constructor: Initialize the Employee object with a name and an employee ID.
Employee::Employee(const std::string& name, int employeeID) : name(name), employeeID(employeeID) {}

// Destructor: Clean up resources if needed when an Employee object is destroyed.
Employee::~Employee() {}

void Employee::displayEmployeeDetails() const {
    std::cout << "Name: " << name << std::endl; // Output the employee's name.
    std::cout << "Employee ID: " << employeeID << std::endl; // Output the employee's ID.
}
