#include <iostream>
#include <string>
#include <iomanip>

std::string decimalToHexadecimal(int decimalNumber) {
    std::string hexadecimalNumber;
    char buffer[2];

    while (decimalNumber > 0) {
        int remainder = decimalNumber % 16;
        if (remainder < 10) {
            buffer[0] = '0' + remainder;
        } else {
            buffer[0] = 'A' + remainder - 10;
        }
        hexadecimalNumber = buffer + hexadecimalNumber;
        decimalNumber /= 16;
    }

    return hexadecimalNumber;
}

int main() {
    int decimalNumber;
    std::cout << "Enter a decimal number: ";
    std::cin >> decimalNumber;

    std::string hexadecimalNumber = decimalToHexadecimal(decimalNumber);
    std::cout << "Hexadecimal representation of " << decimalNumber << " is " << hexadecimalNumber << std::endl;

    return 0;
}