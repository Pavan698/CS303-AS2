#ifndef NONPROFESSIONAL_H
#define NONPROFESSIONAL_H

#include "Employee.h"

class Nonprofessional : public Employee {
public:
    // Constructor: Initialize a Nonprofessional object with a name, employee ID, hourly rate, and worked hours.
    Nonprofessional(const std::string& name, int employeeID, double hourlyRate, int workedHours);

    // Override functions inherited from the base class.
    double calculateWeeklySalary() const override;
    double calculateHealthCareContributions() const override;
    int calculateVacationDaysEarned() const override;

private:
    double hourlyRate;
    int workedHours;
};

#endif 

