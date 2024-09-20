#include <iostream>

void findRepeatingElements(int arr[], int n) {
    // Create a frequency array to store the count of each element
    int freq[n] = {0};

    // Count the frequency of each element
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    // Find the two repeating elements
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (freq[i] > 1) {
            std::cout << "Repeating element " << count + 1 << ": " << i << std::endl;
            count++;
            if (count == 2) break;
        }
    }
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

    findRepeatingElements(arr, n);

    return 0;
}