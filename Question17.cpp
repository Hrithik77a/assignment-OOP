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

std::string addOne(const std::string& binaryNumber) {
    std::string result = binaryNumber;
    int carry = 1;
    for (int i = binaryNumber.size() - 1; i >= 0; i--) {
        if (binaryNumber[i] == '0' && carry == 1) {
            result[i] = '1';
            carry = 0;
        } else if (binaryNumber[i] == '1' && carry == 1) {
            result[i] = '0';
            carry = 1;
        }
    }
    if (carry == 1) {
        result = '1' + result;
    }
    return result;
}

std::string twosComplement(const std::string& binaryNumber) {
    std::string onesComp = onesComplement(binaryNumber);
    std::string twosComp = addOne(onesComp);
    return twosComp;
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

    std::string twosComplementBinary = twosComplement(binaryNumber);
    std::cout << "Two's complement of " << binaryNumber << " is " << twosComplementBinary << std::endl;

    // Convert binary numbers to decimal for verification
    int decimalNumber = std::stoi(binaryNumber, 0, 2);
    int twosComplementDecimal = std::stoi(twosComplementBinary, 0, 2);
    std::cout << "Decimal equivalent of " << binaryNumber << " is " << decimalNumber << std::endl;
    std::cout << "Decimal equivalent of two's complement is " << twosComplementDecimal << std::endl;

    return 0;
}