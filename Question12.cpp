#include <iostream>

int sqrt(int n) {
    if (n < 0) {
        std::cerr << "Error: Input must be a non-negative integer." << std::endl;
        return -1; // or throw an exception
    }
    int start = 0, end = n, ans = 0;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (mid * mid == n) {
            return mid;
        } else if (mid * mid < n) {
            start = mid + 1;
            ans = mid;
        } else {
            end = mid - 1;
        }
    }
    return ans;
}

int main() {
    int n;
    std::cout << "Enter any number: ";
    std::cin >> n;
    int sqrt_n = sqrt(n);
    std::cout << "The square root of " << n << " is " << sqrt_n << std::endl;
    return 0;
}