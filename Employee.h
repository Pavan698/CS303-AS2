#ifndef EMPLOYEE_H   
#define EMPLOYEE_H

#include <string>

class Employee {
public:
    // Constructor: Initializes an Employee object with a name and an employee ID.
    Employee(const std::string& name, int employeeID);
    // Virtual destructor: Allows derived classes to have their own destructors.
    virtual ~Employee();
    // Pure virtual functions (abstract methods) with no implementation.
    // Subclasses must provide concrete implementations for these methods.
    virtual double calculateWeeklySalary() const = 0;
    virtual double calculateHealthCareContributions() const = 0;
    virtual int calculateVacationDaysEarned() const = 0;

    // Member function to display the details of an Employee object.
    void displayEmployeeDetails() const;

protected:
    std::string name;  
    int employeeID;  
};

#endif 
