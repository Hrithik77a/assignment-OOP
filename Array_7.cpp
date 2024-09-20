#include <iostream>

void findFirstRepeatingElement(int arr[], int n) {
    // Create a frequency array to store the count of each element
    int freq[n] = {0};

    // Count the frequency of each element
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    // Find the first repeating element
    for (int i = 0; i < n; i++) {
        if (freq[arr[i]] > 1) {
            std::cout << "First repeating element: " << arr[i] << std::endl;
            return;
        }
    }

    std::cout << "No repeating element found." << std::endl;
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    int arr[n];
    std::cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    findFirstRepeatingElement(arr, n);

    return 0;
}