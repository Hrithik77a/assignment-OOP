#include <iostream>
using namespace std;

class Triangle {
private:
    float side1, side2, side3;

public:
    // Function to set the lengths of the sides of the triangle
    void setSides(float s1, float s2, float s3) {
        side1 = s1;
        side2 = s2;
        side3 = s3;
    }

    // Function to check if the triangle is equilateral
    bool isEquilateral() {
        return (side1 == side2 && side2 == side3);
    }

    // Function to check if the triangle is isosceles
    bool isIsosceles() {
        return (side1 == side2 || side2 == side3 || side1 == side3);
    }

    // Function to check if the triangle is scalene
    bool isScalene() {
        return (side1 != side2 && side2 != side3 && side1 != side3);
    }

    // Function to display the type of triangle
    void displayTriangleType() {
        if (isEquilateral()) {
            cout << "The triangle is equilateral." << endl;
        } else if (isIsosceles()) {
            cout << "The triangle is isosceles." << endl;
        } else if (isScalene()) {
            cout << "The triangle is scalene." << endl;
        } else {
            cout << "Invalid triangle!" << endl;
        }
    }
};

int main() {
    Triangle triangle;
    float side1, side2, side3;

    // Get the sides of the triangle from the user
    cout << "Enter the length of side 1: ";
    cin >> side1;
    cout << "Enter the length of side 2: ";
    cin >> side2;
    cout << "Enter the length of side 3: ";
    cin >> side3;

    // Set the sides of the triangle
    triangle.setSides(side1, side2, side3);

    // Display the type of triangle
    triangle.displayTriangleType();

    return 0;
}
