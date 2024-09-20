#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    string studentClass;
    int rollNumber;
    float marks;

    // Private function to calculate the grade based on marks
    char calculateGrade() {
        if (marks >= 90) {
            return 'A';
        } else if (marks >= 80) {
            return 'B';
        } else if (marks >= 70) {
            return 'C';
        } else if (marks >= 60) {
            return 'D';
        } else {
            return 'F';  // Fail
        }
    }

public:
    // Function to set student details
    void setStudentDetails(string studentName, string studentClass, int studentRollNumber, float studentMarks) {
        name = studentName;
        this->studentClass = studentClass;
        rollNumber = studentRollNumber;
        marks = studentMarks;
    }

    // Function to display student details and grade
    void displayStudentDetails() {
        cout << "Student Name: " << name << endl;
        cout << "Class: " << studentClass << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << calculateGrade() << endl;
    }
};

int main() {
    Student student;
    string name, studentClass;
    int rollNumber;
    float marks;

    // Input student details
    cout << "Enter student name: ";
    getline(cin, name);
    cout << "Enter class: ";
    getline(cin, studentClass);
    cout << "Enter roll number: ";
    cin >> rollNumber;
    cout << "Enter marks: ";
    cin >> marks;

    // Set and display student details
    student.setStudentDetails(name, studentClass, rollNumber, marks);
    student.displayStudentDetails();

    return 0;
}
