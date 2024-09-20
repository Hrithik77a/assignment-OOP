#include <iostream>
#include <cmath>

int main() {
    int num, temp, digits = 0, firstDigit, lastDigit;

    // Get user input for the number
    std::cout << "Input any number: ";
    std::cin >> num;

    // Store the original number
    temp = num;

    // Count the number of digits
    while (temp != 0) {
        temp /= 10;
        digits++;
    }

    // Extract the first digit
    firstDigit = num / pow(10, digits - 1);

    // Extract the last digit
    lastDigit = num % 10;

    // Remove the first and last digits from the number
    num = (num % (int)pow(10, digits - 1)) / 10;

    // Swap the first and last digits
    num = (lastDigit * pow(10, digits - 1)) + (num * 10) + firstDigit;

    // Print the result
    std::cout << "The number after swapping the first and last digits are: " << num << std::endl;

    return 0;
}