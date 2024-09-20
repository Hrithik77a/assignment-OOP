#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0)
            return false;
    }
    return true;
}

// Recursive function to calculate the sum of primes in the range
int sumOfPrimes(int start, int end) {
    if (start > end) return 0; // Base case: range is invalid
    
    // Check if the current number is prime
    int current = start;
    int sum = 0;
    if (isPrime(current)) {
        sum = current;
    }
    
    // Recursive call to find the sum for the next number
    return sum + sumOfPrimes(start + 1, end);
}

int main() {
    int start, end;
    
    cout << "Enter the start of the range: ";
    cin >> start;
    
    cout << "Enter the end of the range: ";
    cin >> end;
    
    int result = sumOfPrimes(start, end);
    
    cout << "The sum of all prime numbers in the range [" << start << ", " << end << "] is: " << result << endl;
    
    return 0;
}
