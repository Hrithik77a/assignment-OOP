#include <iostream>
#include <vector>
#include <string>
#include <cctype>  // For toupper()
using namespace std;

// Function to capitalize the first character of each string in the vector
vector<string> capitalizeFirstCharacter(vector<string> &vec) {
    for (string &str : vec) {
        if (!str.empty()) {
            str[0] = toupper(str[0]);  // Capitalize the first character
        }
    }
    return vec;
}

int main() {
    vector<string> vec;
    int n;
    string element;

    // Get the number of elements in the vector
    cout << "Enter the number of strings in the vector: ";
    cin >> n;
    cin.ignore();  // To ignore the newline character left in the input buffer

    // Get the strings for the vector from the user
    cout << "Enter the strings:" << endl;
    for (int i = 0; i < n; ++i) {
        getline(cin, element);
        vec.push_back(element);
    }

    // Capitalize the first character of each string
    vector<string> updatedVec = capitalizeFirstCharacter(vec);

    // Display the updated vector
    cout << "Updated vector with capitalized first characters:" << endl;
    for (const string &str : updatedVec) {
        cout << str << endl;
    }

    return 0;
}
