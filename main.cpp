#include "Professional.h"
#include "Nonprofessional.h"
#include <iostream> 

int main() {
    // Create a Professional object with name "John Doe", ID 1001, weekly salary $5000.0, and 15 vacation days.
    Professional profEmployee("John Doe", 1001, 5000.0, 15);

    // Create a Nonprofessional object with name "Jane Smith", ID 1002, hourly wage $20.0, and 50 vacation days.
    Nonprofessional nonprofEmployee("Jane Smith", 1002, 20.0, 50);

    profEmployee.displayEmployeeDetails();
    std::cout << "Weekly Salary: $" << profEmployee.calculateWeeklySalary() << std::endl;
    std::cout << "Health Care Contributions: $" << profEmployee.calculateHealthCareContributions() << std::endl;
    std::cout << "Vacation Days Earned: " << profEmployee.calculateVacationDaysEarned() << std::endl;

    std::cout << "\n";

    nonprofEmployee.displayEmployeeDetails();
    std::cout << "Weekly Salary: $" << nonprofEmployee.calculateWeeklySalary() << std::endl;
    std::cout << "Health Care Contributions: $" << nonprofEmployee.calculateHealthCareContributions() << std::endl;
    std::cout << "Vacation Days Earned: " << nonprofEmployee.calculateVacationDaysEarned() << std::endl;

    return 0;
}
