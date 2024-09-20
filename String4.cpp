#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(const string &str) {
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        // Skip non-alphanumeric characters
        while (left < right && !isalnum(str[left])) {
            left++;
        }
        while (left < right && !isalnum(str[right])) {
            right--;
        }
        // Compare characters
        if (tolower(str[left]) != tolower(str[right])) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    string str;

    // Get the string input from the user
    cout << "Enter a string: ";
    getline(cin, str);

    // Check if the string is a palindrome
    if (isPalindrome(str)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}
