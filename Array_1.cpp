#include<iostream>
using namespace std;

void findLargestThree(int arr[], int n) {
    int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN;
    for(int i = 0; i < n; i++) {
        if(arr[i] > max1) {
            max3 = max2;
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i] > max2 && arr[i] != max1) {
            max3 = max2;
            max2 = arr[i];
        }
        else if(arr[i] > max3 && arr[i] != max1 && arr[i] != max2) {
            max3 = arr[i];
        }
    }
    cout << "The three largest elements are " << max1 << ", " << max2 << ", " << max3 << endl;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "The array is: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << "\t";
    }
    if(n < 3) {
        cout << "\nArray should have at least 3 elements." << endl;
    }
    else {
        findLargestThree(arr, n);
    }
    return 0;
}