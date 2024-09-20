#include <iostream>
#include <vector>
#include <string>
#include <cctype>  // For isdigit()
using namespace std;

// Function to check if a string contains any digit
bool containsDigit(const string &str) {
    for (char ch : str) {
        if (isdigit(ch)) {
            return true;
        }
    }
    return false;
}

// Function to filter strings that contain numbers
vector<string> filterStringsWithNumbers(const vector<string> &vec) {
    vector<string> result;
    for (const string &str : vec) {
        if (containsDigit(str)) {
            result.push_back(str);
        }
    }
    return result;
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

    // Filter the strings that contain numbers
    vector<string> filteredVec = filterStringsWithNumbers(vec);

    // Display the filtered vector
    if (!filteredVec.empty()) {
        cout << "Strings containing numbers:" << endl;
        for (const string &str : filteredVec) {
            cout << str << endl;
        }
    } else {
        cout << "No strings contain numbers." << endl;
    }

    return 0;
}
