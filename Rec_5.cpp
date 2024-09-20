#include <iostream>
#include <string>

using namespace std;

// Recursive function to check if a string is a palindrome
bool isPalindrome(string str, int start, int end) {
  // Base case: if the start index is greater than or equal to the end index, 
  // the string is a palindrome
  if (start >= end) {
    return true;
  }

  // If the characters at the start and end indices do not match, 
  // the string is not a palindrome
  if (str[start] != str[end]) {
    return false;
  }

  // Recursive call to check the remaining characters
  return isPalindrome(str, start + 1, end - 1);
}

int main() {
  string input;
  cout << "Enter a string: ";
  cin >> input;

  int length = input.length();
  if (isPalindrome(input, 0, length - 1)) {
    cout << "The string is a palindrome." << endl;
  } else {
    cout << "The string is not a palindrome." << endl;
  }

  return 0;
}