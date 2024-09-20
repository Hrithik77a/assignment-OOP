#include <iostream>
#include <cmath>

bool isPowerOfThree(int n) {
    if (n <= 0) 
        return false;
    double logValue = log10(n) / log10(3);
    return logValue == (int)logValue;
}

int main() {
    int n = 27;
    if (isPowerOfThree(n)) 
        std::cout << "The number is a power of 3";
    else 
        std::cout << "The number is not a power of 3";
    return 0;
}