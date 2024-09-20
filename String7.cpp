#include <iostream>
#include <string>
using namespace std;

// Function to remove all occurrences of a specific character from the string
string removeCharacter(const string &str, char charToRemove) {
    string result;
    
    // Iterate through each character in the string
    for (char ch : str) {
        // Append the character to the result if it is not the one to be removed
        if (ch != charToRemove) {
            result += ch;
        }
    }
    
    return result;
}

int main() {
    string str;
    char charToRemove;

    // Get the string input from the user
    cout << "Enter a string: ";
    getline(cin, str);

    // Get the character to be removed from the user
    cout << "Enter the character to remove: ";
    cin >> charToRemove;

    // Remove the character from the string and display the updated string
    string updatedString = removeCharacter(str, charToRemove);
    cout << "Updated string: " << updatedString << endl;

    return 0;
}
