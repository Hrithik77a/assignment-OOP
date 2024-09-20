#include <iostream>

int main() {
    int num1, num2;

    // Get user input for the first number
    std::cout << "Input 1st number: ";
    std::cin >> num1;

    // Get user input for the second number
    std::cout << "Input 2nd number: ";
    std::cin >> num2;

    // Swap the numbers without using a third variable
    num1 = num1 + num2; // num1 now holds the sum of both numbers
    num2 = num1 - num2; // num2 now holds the original value of num1
    num1 = num1 - num2; // num1 now holds the original value of num2

    // Print the swapped numbers
    std::cout << "After swapping the 1st number is: " << num1 << std::endl;
    std::cout << "After swapping the 2nd number is: " << num2 << std::endl;

    return 0;
}