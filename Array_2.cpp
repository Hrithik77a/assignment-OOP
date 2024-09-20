#include <iostream>

int findSecondLargest(int arr[], int n) {
    int max = arr[0];
    int secondMax = INT_MIN;

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            secondMax = max;
            max = arr[i];
        } else if (arr[i] > secondMax && arr[i] != max) {
            secondMax = arr[i];
        }
    }

    if (secondMax == INT_MIN) {
        std::cout << "There is no second largest element." << std::endl;
        return -1;
    }

    return secondMax;
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

    int secondLargest = findSecondLargest(arr, n);
    std::cout << "The second largest element is: " << secondLargest << std::endl;

    return 0;
}