/*
Problem Name: Day before days_to_go_back day
Problem Statement: You are given a current day (as an integer from 1 to 7 where 1 = Monday, 7 = Sunday) and a number days_to_go_back representing days to go back. Write a program that prints the day of the week days_to_go_back days before the given day.
Constraints:
Use only arithmetic and modulus operations
Day numbers must wrap around correctly (after Monday comes Sunday)
Output must be a single integer (1–7 only)
Example:
Input: 3 10
Output: 6
*/

#include<iostream>
int main(){
    int current_day , days_to_go_back , expected_day;
    std::cout<<"Enter a number between 1 to 7 which represents a day of the week(Monday=1 ... Sunday=7): ";
    std::cin>>current_day;
    std::cout<<"How many days you want to go back: ";
    std::cin>>days_to_go_back;

    // Convert input from 1–7 to 0–6 to align with 0-based modulo arithmetic
    // Subtract (days_to_go_back % 7) to step back the appropriate number of days
    // Add 7 to prevent negative results before applying modulo
    // Use % 7 to wrap the result within a 0–6 range
    // Add 1 to shift back to the original 1–7 day format
    expected_day = ( (current_day - 1 - (days_to_go_back % 7) + 7) % 7 ) + 1;
    
    //alternate approach 
    // expected_day =( (current_day - (days_to_go_back%7) + 7)%7 + 6 )%7 +1;    
    // cutrrent_day - (days_to_go_back%7) goes back in number of days which are needed +7 to avoid negative %7 to kerp in range then (..+6)%7 rotates to left by 1 then +1 to make it in range of 1-7
    std::cout<<"The day before "<<days_to_go_back<<" Days would be: "<<expected_day;
    return 0;
}

