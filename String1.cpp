#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;

    // Get the string input from the user
    cout << "Enter a string: ";
    getline(cin, str);

    // Reverse the string
    int n = str.length();
    for (int i = 0; i < n / 2; i++) {
        // Swap characters from start and end
        swap(str[i], str[n - i - 1]);
    }

    // Display the reversed string
    cout << "Reversed string: " << str << endl;

    return 0;
}
