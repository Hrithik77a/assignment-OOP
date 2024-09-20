#include <iostream>
#include <string>
using namespace std;

void capitalizeFirstLetter(string &str) {
    bool capitalize = true;  // Flag to indicate whether to capitalize the next character

    for (int i = 0; i < str.length(); i++) {
        if (capitalize && isalpha(str[i])) {
            str[i] = toupper(str[i]);  // Capitalize the letter
            capitalize = false;  // After capitalizing, set flag to false
        } else if (str[i] == ' ') {
            capitalize = true;  // Set flag to true if a space is encountered
        }
    }
}

int main() {
    string str;

    // Get the string input from the user
    cout << "Enter a string: ";
    getline(cin, str);

    // Capitalize the first letter of each word
    capitalizeFirstLetter(str);

    // Display the modified string
    cout << "Capitalized string: " << str << endl;

    return 0;
}
