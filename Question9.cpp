#include <iostream>
#include <string>
#include <chrono>
#include <sstream>

// Function to convert a date string in YYYY-MM-DD format to a time_point
std::chrono::system_clock::time_point dateFromString(const std::string& date) {
    std::tm t = {};
    std::istringstream ss(date);
    ss >> std::get_time(&t, "%Y-%m-%d");
    return std::chrono::system_clock::from_time_t(std::mktime(&t));
}

// Function to calculate the number of days between two dates
int daysBetweenDates(const std::string& date1, const std::string& date2) {
    auto time1 = dateFromString(date1);
    auto time2 = dateFromString(date2);
    return std::chrono::duration_cast<std::chrono::days>(time2 - time1).count();
}

int main() {
    std::string date1, date2;

    // Get user input for the two dates
    std::cout << "Enter the first date (YYYY-MM-DD): ";
    std::cin >> date1;
    std::cout << "Enter the second date (YYYY-MM-DD): ";
    std::cin >> date2;

    // Calculate the number of days between the two dates
    int days = daysBetweenDates(date1, date2);

    // Print the result
    std::cout << "Days between " << date1 << " and " << date2 << " = " << days << std::endl;

    return 0;
}
