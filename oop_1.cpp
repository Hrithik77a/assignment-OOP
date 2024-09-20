#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int employeeID;
    double salary;

public:
    // Constructor to initialize default values
    Employee() : name(""), employeeID(0), salary(0.0) {}

    // Function to set employee details
    void setEmployeeDetails(string empName, int empID) {
        name = empName;
        employeeID = empID;
    }

    // Function to calculate and set salary based on performance rating
    void setSalary(double baseSalary, int performanceRating) {
        double bonus = 0.0;

        // Calculate bonus based on performance rating
        if (performanceRating == 1) {
            bonus = 0.10 * baseSalary; // 10% bonus for excellent performance
        } else if (performanceRating == 2) {
            bonus = 0.05 * baseSalary; // 5% bonus for good performance
        } else if (performanceRating == 3) {
            bonus = 0.02 * baseSalary; // 2% bonus for satisfactory performance
        } else {
            cout << "No bonus for unsatisfactory performance!" << endl;
        }

        salary = baseSalary + bonus;
    }

    // Function to display employee details
    void displayEmployeeDetails() {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Salary: $" << salary << endl;
    }
};

int main() {
    Employee emp;
    string name;
    int empID, performanceRating;
    double baseSalary;

    // Get employee details from the user
    cout << "Enter employee name: ";
    getline(cin, name);
    cout << "Enter employee ID: ";
    cin >> empID;

    // Set employee details
    emp.setEmployeeDetails(name, empID);

    // Get base salary and performance rating from the user
    cout << "Enter base salary: $";
    cin >> baseSalary;
    cout << "Enter performance rating (1 = Excellent, 2 = Good, 3 = Satisfactory, 4 = Unsatisfactory): ";
    cin >> performanceRating;

    // Set salary based on performance
    emp.setSalary(baseSalary, performanceRating);

    // Display employee details
    emp.displayEmployeeDetails();

    return 0;
}
