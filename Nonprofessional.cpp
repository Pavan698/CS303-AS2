#include "Nonprofessional.h"

// Constructor: Initialize a Nonprofessional object with a name, employee ID, hourly rate, and worked hours.
Nonprofessional::Nonprofessional(const std::string& name, int employeeID, double hourlyRate, int workedHours)
    : Employee(name, employeeID), hourlyRate(hourlyRate), workedHours(workedHours) {}

// Calculate and return the weekly salary for a Nonprofessional employee.
double Nonprofessional::calculateWeeklySalary() const {
    return hourlyRate * workedHours;
}

// Calculate and return the health care contributions for a Nonprofessional employee.
double Nonprofessional::calculateHealthCareContributions() const {
    // Implement health care contributions calculation for nonprofessionals
    // (you can use some formula here)
    return 0.0;
}

int Nonprofessional::calculateVacationDaysEarned() const {
    return workedHours / 40; // Assuming 40 hours of work for 1 vacation day
}
