#include <iostream>
#include <iomanip>

int main() {
    std::string name, designation;
    double base_salary, hra, income_tax, total_earning, total_deduction, net_salary;

    const std::string COMPANY_NAME = "GOOGLE INDIA";
    const double MEDICAL_ALLOWANCE = 1250.00;
    const double OTHER_CHARGES = 800.00;

    // inputs
    std::cout << "ENTER FULL NAME: \n";
    getline(std::cin, name);
    std::cout << "ENTER DESIGNATION: \n";
    getline(std::cin, designation);
    std::cout << "ENTER BASE SALARY: \n";
    std::cin >> base_salary;

    // HRA calculation
    hra = base_salary * 0.2;

    // income tax calculation
    income_tax = base_salary * 0.05;

    // total earning and deduction calc
    total_earning = base_salary + hra + MEDICAL_ALLOWANCE;
    total_deduction = income_tax + OTHER_CHARGES;

    // net salary calc
    net_salary = total_earning - total_deduction;

    // output
    std::cout << std::fixed << std::setprecision(2) << std::left;

    std::cout << std::setfill('_') << std::setw(80) << "_";
    std::cout << std::setfill(' ') << "\n";

    std::cout << COMPANY_NAME;
    std::cout << "\nSALARY SLIP\n";

    std::cout << std::setfill('_') << std::setw(80) << "_";
    std::cout << std::setfill(' ') << "\n";

    std::cout << "Name: " << name << "\n";
    std::cout << "Designation: " << designation << "\n";

    std::cout << std::setfill('_') << std::setw(80) << "_";
    std::cout << std::setfill(' ') << "\n";

    std::cout << std::setw(20) << "Earnings"
              << std::setw(20) << "Ammount"
              << std::setw(20) << "Deductions"
              << std::setw(20) << "Amount" << "\n";

    std::cout << std::setfill('_') << std::setw(80) << "_";
    std::cout << std::setfill(' ') << "\n";

    std::cout << std::setw(20) << "Basic Salary"
              << std::setw(20) << base_salary
              << std::setw(20) << "Income Tax"
              << std::setw(20) << income_tax << "\n";

    std::cout << std::setw(20) << "HRA(20%)"
              << std::setw(20) << hra
              << std::setw(20) << "Other Charges"
              << std::setw(20) << OTHER_CHARGES << "\n";

    std::cout << std::setw(20) << "Medical Allowance"
              << std::setw(20) << MEDICAL_ALLOWANCE << "\n";

    std::cout << std::setfill('_') << std::setw(80) << "_";
    std::cout << std::setfill(' ') << "\n";

    std::cout << std::setw(20) << "Total Earnings"
              << std::setw(20) << total_earning
              << std::setw(20) << "Total Deductions"
              << std::setw(20) << total_deduction << "\n";

    std::cout << std::setfill('_') << std::setw(80) << "_";
    std::cout << std::setfill(' ') << "\n";

    std::cout << std::setw(20) << "Net Salary"
              << std::setw(20) << net_salary << "\n";

    std::cout << std::setfill('_') << std::setw(80) << "_";
    std::cout << std::setfill(' ') << "\n";

    return 0;
}

