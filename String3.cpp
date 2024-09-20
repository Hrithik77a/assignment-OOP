#include <iostream>
#include <string>
using namespace std;

string findLargestWord(const string &str) {
    int maxLength = 0;  // Store the maximum length of the word
    string largestWord = "";  // Store the largest word
    string currentWord = "";  // To hold each word while traversing

    for (char ch : str) {
        if (ch == ' ') {
            // If we encounter a space, check if the current word is the largest
            if (currentWord.length() > maxLength) {
                maxLength = currentWord.length();
                largestWord = currentWord;
            }
            // Reset current word
            currentWord = "";
        } else {
            // Append the character to form the current word
            currentWord += ch;
        }
    }

    // Check the last word (in case the string doesn't end with a space)
    if (currentWord.length() > maxLength) {
        largestWord = currentWord;
    }

    return largestWord;
}

int main() {
    string str;

    // Get the string input from the user
    cout << "Enter a string: ";
    getline(cin, str);

    // Find and display the largest word
    string largestWord = findLargestWord(str);
    cout << "The largest word is: " << largestWord << endl;

    return 0;
}
