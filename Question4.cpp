#include <iostream>

int main() {
    int start, end, sum = 0;

    // Get user input for the start and end numbers
    std::cout << "Enter the start number: ";
    std::cin >> start;
    std::cout << "Enter the end number: ";
    std::cin >> end;

    // Iterate over the range of numbers
    for (int i = start; i <= end; i++) {
        // Extract each digit of the current number
        int num = i;
        while (num != 0) {
            sum += num % 10;
            num /= 10;
        }
    }

    // Print the result
    std::cout << "The sum of all digits between " << start << " and " << end << " is: " << sum << std::endl;

    return 0;
}