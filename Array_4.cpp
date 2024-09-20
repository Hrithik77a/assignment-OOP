#include <iostream>

int findSmallestMissing(int arr[], int n) {
    int i;
    for (i = 0; i < n - 1; i++) {
        if (arr[i + 1] - arr[i] > 1) {
            return arr[i] + 1;
        }
    }
    return arr[i] + 1;
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

    int smallestMissing = findSmallestMissing(arr, n);
    std::cout << "The smallest element missing is: " << smallestMissing << std::endl;

    return 0;
}