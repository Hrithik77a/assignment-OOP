#include <iostream>
#include <queue>

void findKLargest(int arr[], int n, int k) {
    std::priority_queue<int> maxHeap;

    for (int i = 0; i < n; i++) {
        maxHeap.push(arr[i]);
    }

    std::cout << "The " << k << " largest elements are: ";
    for (int i = 0; i < k; i++) {
        std::cout << maxHeap.top() << " ";
        maxHeap.pop();
    }
    std::cout << std::endl;
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

    int k;
    std::cout << "Enter the value of k: ";
    std::cin >> k;

    findKLargest(arr, n, k);

    return 0;
}