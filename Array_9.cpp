#include <iostream>
#include <string>
#include <algorithm>

void findThirdLargestString(std::string arr[], int n) {
    // Create a copy of the array to avoid modifying the original array
    std::string temp[n];
    for (int i = 0; i < n; i++) {
        temp[i] = arr[i];
    }

    // Sort the array of strings in descending order
    std::sort(temp, temp + n, [](const std::string& a, const std::string& b) {
        return a.size() > b.size();
    });

    // Find the third largest string
    if (n >= 3) {
        std::cout << "Third largest string: " << temp[2] << std::endl;
    } else {
        std::cout << "There are less than three unique strings in the array." << std::endl;
    }
}

int main() {
    int n;
    std::cout << "Enter the number of strings: ";
    std::cin >> n;

    std::string arr[n];
    std::cout << "Enter the strings: ";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    findThirdLargestString(arr, n);

    return 0;
}