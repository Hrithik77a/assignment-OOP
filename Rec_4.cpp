#include<iostream>
#include<string>
using namespace std;

// Function to reverse a string using recursion
void reverseString(string str, int start, int end) {
    // Base case: if start is greater than or equal to end, return
    if (start >= end)
        return;
    else {
        // Swap the characters at start and end indices
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        // Recursive case: call reverseString with start+1 and end-1
        reverseString(str, start + 1, end - 1);
    }
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    int length = str.length();
    cout << "Original string: " << str << endl;
    reverseString(str, 0, length - 1);
    cout << "Reversed string: " << str << endl;
    return 0;
}