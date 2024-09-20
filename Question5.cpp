#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int numCount;
    std::vector<int> numbers;

    // Get user input for the number of numbers
    std::cout << "Enter the number of numbers: ";
    std::cin >> numCount;

    // Get user input for the numbers
    std::cout << "Enter the numbers: ";
    for (int i = 0; i < numCount; i++) {
        int num;
        std::cin >> num;
        numbers.push_back(num);
    }

    // Sort the numbers in descending order
    std::sort(numbers.begin(), numbers.end(), std::greater<int>());

    // Print the three highest numbers
    std::cout << "The three highest numbers are: ";
    for (int i = 0; i < 3 && i < numbers.size(); i++) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}