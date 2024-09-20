#include <iostream>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

    // Function to check if a year is a leap year
    bool isLeapYear(int y) {
        return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
    }

    // Function to check if the day is valid for the given month and year
    bool isValidDay(int d, int m, int y) {
        if (d <= 0) return false;
        
        // Days in each month (index 0 ignored for convenience)
        int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        
        // Adjust for leap year if February
        if (m == 2 && isLeapYear(y)) {
            return d <= 29;
        }
        return d <= daysInMonth[m];
    }

    // Function to check if the month is valid
    bool isValidMonth(int m) {
        return m >= 1 && m <= 12;
    }

public:
    // Constructor to initialize date to default values (1st Jan 2000)
    Date() : day(1), month(1), year(2000) {}

    // Function to set the date
    bool setDate(int d, int m, int y) {
        if (isValidMonth(m) && isValidDay(d, m, y)) {
            day = d;
            month = m;
            year = y;
            return true;
        } else {
            cout << "Invalid date!" << endl;
            return false;
        }
    }

    // Function to get the date
    void getDate() {
        cout << "Date: " << day << "/" << month << "/" << year << endl;
    }
};

int main() {
    Date date;
    int d, m, y;

    // Ask user to enter a date
    cout << "Enter day: ";
    cin >> d;
    cout << "Enter month: ";
    cin >> m;
    cout << "Enter year: ";
    cin >> y;

    // Set and display the date
    if (date.setDate(d, m, y)) {
        date.getDate();
    }

    return 0;
}
