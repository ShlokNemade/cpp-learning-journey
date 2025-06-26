/*
Problem Name: Structured Salary Slip Generator

Problem Statement: Design a program that generates a well-formatted salary slip showing two columns: Earnings and Deductions, based on base salary and fixed component values.

Input Format:
Line 1: Full name
Line 2: Designation
Line 3: Base salary

________________________________________________________________
ABC Pvt. Ltd.
Salary Slip                   
________________________________________________________________
Name:         (full name)
Designation:  SDE
________________________________________________________________
Earnings            Amount        Deductions         Amount
________________________________________________________________
Basic Salary        Rs.50000      Income Tax(5%)     Rs.2500.00
HRA (20%)           Rs.20000      Company Charges    Rs.800.00
Medical Allowance   Rs.1250       
________________________________________________________________
Total Earnings      Rs.61250.00   Total Deductions   Rs.3300.00
________________________________________________________________
Net Salary          Rs.57950.00
________________________________________________________________

Constraints:
HRA = 20% of base salary
Medical Allowance = Rs.1250
Income Tax = 5% of base salary
Company Charges = Rs.800
All currency values must be printed with 2 digits after the decimal point
Company name must be stored as a constant
Align all sections and columns as shown
Round off all computed values to 2 decimal places if needed
*/
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

