#include <iostream>

int singleDigit(int n) {
    if (n < 10) {
        return n;
    }

    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }

    return singleDigit(sum);
}

int main() {
    int num;

    // Get user input for the number
    std::cout << "Enter a non-negative number: ";
    std::cin >> num;

    // Calculate the single digit result
    int result = singleDigit(num);

    // Print the result
    std::cout << "The single digit result is: " << result << std::endl;

    return 0;
}