#include <iostream>

int productOfDigits(int n) {
    int product = 1;
    while (n != 0) {
        int digit = n % 10;
        product *= digit;
        n /= 10;
    }
    return product;
}

int main() {
    int n = 1234;
    int product = productOfDigits(n);
    std::cout << "The product of the digits of " << n << " is " << product << std::endl;
    return 0;
}