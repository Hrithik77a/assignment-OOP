#include <iostream>
#include <bitset>
#include <string>

std::string decimalToBinary(int decimalNumber) {
    std::bitset<32> binaryNumber(decimalNumber);
    return binaryNumber.to_string();
}

int main() {
    int decimalNumber;
    std::cout << "Enter a decimal number: ";
    std::cin >> decimalNumber;

    std::string binaryNumber = decimalToBinary(decimalNumber);
    std::cout << "Binary representation of " << decimalNumber << " is " << binaryNumber << std::endl;

    return 0;
}