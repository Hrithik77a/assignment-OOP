#include <iostream>

int countOccurrences(int arr[], int n, int target) {
    // Initialize count to 0
    int count = 0;

    // Find the first occurrence of the target number
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] < target) {
            left = mid + 1;
        } else if (arr[mid] > target) {
            right = mid - 1;
        } else {
            // Found the target number, count its occurrences
            count = 1;
            int i = mid - 1;
            while (i >= 0 && arr[i] == target) {
                count++;
                i--;
            }
            i = mid + 1;
            while (i < n && arr[i] == target) {
                count++;
                i++;
            }
            break;
        }
    }

    return count;
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

    int target;
    std::cout << "Enter the target number: ";
    std::cin >> target;

    int occurrences = countOccurrences(arr, n, target);
    std::cout << "Number of occurrences: " << occurrences << std::endl;

    return 0;
}