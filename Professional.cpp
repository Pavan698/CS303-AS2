#include "Professional.h"

Professional::Professional(const std::string& name, int employeeID, double monthlySalary, int vacationDays)
    : Employee(name, employeeID), monthlySalary(monthlySalary), vacationDays(vacationDays) {}

double Professional::calculateWeeklySalary() const {
    return monthlySalary / 4.0; // Assuming a month has 4 weeks
}

double Professional::calculateHealthCareContributions() const {
    // Implement health care contributions calculation for professionals
    // (you can use some formula here)
    return 0.0;
}

int Professional::calculateVacationDaysEarned() const {
    return vacationDays / 12; // Assuming 12 months in a year
}
