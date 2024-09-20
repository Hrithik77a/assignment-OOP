#include <iostream>

int daysInMonth(int year, int month) {
    if (month == 2) {
        // February has 28 days in non-leap years and 29 days in leap years
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
            return 29;
        } else {
            return 28;
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        // April, June, September, and November have 30 days
        return 30;
    } else {
        // January, March, May, July, August, October, and December have 31 days
        return 31;
    }
}

int main() {
    int year, month;

    // Get user input for the year and month
    std::cout << "Enter the year: ";
    std::cin >> year;
    std::cout << "Enter the month: ";
    std::cin >> month;

    // Compute the number of days in the month
    int days = daysInMonth(year, month);

    // Print the result
    std::cout << "Number of days of the year " << year << " and month " << month << " is: " << days << std::endl;

    return 0;
}