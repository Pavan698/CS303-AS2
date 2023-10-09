#ifndef PROFESSIONAL_H
#define PROFESSIONAL_H

#include "Employee.h"

class Professional : public Employee {
public:
    // Constructor: Initialize a Professional object with a name, employee ID, monthly salary, and vacation days.
    Professional(const std::string& name, int employeeID, double monthlySalary, int vacationDays);

    // Override functions inherited from the base class.
    double calculateWeeklySalary() const override;
    double calculateHealthCareContributions() const override;
    int calculateVacationDaysEarned() const override;

private:
    double monthlySalary;
    int vacationDays;
};

#endif 
