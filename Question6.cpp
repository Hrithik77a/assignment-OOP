#include <iostream>

int main() {
    int num1, num2, sum;
    int digitCount = 0;

    // Get user input for the two numbers
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Compute the sum of the two numbers
    sum = num1 + num2;

    // Count the number of digits in the sum value
    int tempSum = sum;
    while (tempSum != 0) {
        tempSum /= 10;
        digitCount++;
    }

    // Print the result
    std::cout << "The sum of the two numbers is: " << sum << std::endl;
    std::cout << "The number of digits in the sum value is: " << digitCount << std::endl;

    return 0;
}