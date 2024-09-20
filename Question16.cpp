#include <iostream>
#include <string>
#include <bitset>

std::string onesComplement(const std::string& binaryNumber) {
    std::string result = "";
    for (char c : binaryNumber) {
        if (c == '0') {
            result += '1';
        } else {
            result += '0';
        }
    }
    return result;
}

int main() {
    std::string binaryNumber;
    std::cout << "Enter a binary number: ";
    std::cin >> binaryNumber;

    // Validate the input binary number
    for (char c : binaryNumber) {
        if (c != '0' && c != '1') {
            std::cerr << "Invalid binary number. Please enter a number consisting only of 0s and 1s." << std::endl;
            return 1;
        }
    }

    std::string onesComplementBinary = onesComplement(binaryNumber);
    std::cout << "One's complement of " << binaryNumber << " is " << onesComplementBinary << std::endl;

    // Convert binary numbers to decimal for verification
    int decimalNumber = std::stoi(binaryNumber, 0, 2);
    int onesComplementDecimal = std::stoi(onesComplementBinary, 0, 2);
    std::cout << "Decimal equivalent of " << binaryNumber << " is " << decimalNumber << std::endl;
    std::cout << "Decimal equivalent of one's complement is " << onesComplementDecimal << std::endl;

    return 0;
}