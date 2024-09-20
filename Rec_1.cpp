#include<iostream>
using namespace std;

// Function to calculate the sum of array elements using recursion
int sumArray(int arr[], int n) {
    // Base case: if the array has only one element, return that element
    if (n == 1)
        return arr[0];
    else
        // Recursive case: return the first element plus the sum of the rest of the array
        return arr[0] + sumArray(arr + 1, n - 1);
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Sum of array elements: " << sumArray(arr, n);
    return 0;
}