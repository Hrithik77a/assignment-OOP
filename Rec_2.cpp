#include<iostream>
using namespace std;

// Function to calculate the factorial of a number using recursion
int factorial(int n) {
    // Base case: if n is 0 or 1, return 1
    if (n == 0 || n == 1)
        return 1;
    else
        // Recursive case: return n multiplied by the factorial of n-1
        return n * factorial(n - 1);
}

int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;
    cout << "Factorial of " << num << " is: " << factorial(num);
    return 0;
}