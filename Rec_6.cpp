#include <iostream>

using namespace std;

// Recursive function to calculate the sum of even numbers in a range
int sumEven(int start, int end) {
  // Base case: if the start value is greater than the end value, return 0
  if (start > end) {
    return 0;
  }

  // If the current number is even, add it to the sum and recursively call with the next number
  if (start % 2 == 0) {
    return start + sumEven(start + 1, end);
  }

  // If the current number is odd, recursively call with the next number
  return sumEven(start + 1, end);
}

// Recursive function to calculate the sum of odd numbers in a range
int sumOdd(int start, int end) {
  // Base case: if the start value is greater than the end value, return 0
  if (start > end) {
    return 0;
  }

  // If the current number is odd, add it to the sum and recursively call with the next number
  if (start % 2 != 0) {
    return start + sumOdd(start + 1, end);
  }

  // If the current number is even, recursively call with the next number
  return sumOdd(start + 1, end);
}

int main() {
  int start, end;
  cout << "Enter the start of the range: ";
  cin >> start;
  cout << "Enter the end of the range: ";
  cin >> end;

  int sumEvenNumbers = sumEven(start, end);
  int sumOddNumbers = sumOdd(start, end);

  cout << "The sum of even numbers in the range is: " << sumEvenNumbers << endl;
  cout << "The sum of odd numbers in the range is: " << sumOddNumbers << endl;

  return 0;
}