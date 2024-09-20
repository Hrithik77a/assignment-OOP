#include <iostream>
#include <string>
#include <unordered_map>
#include <sstream>
using namespace std;

// Function to calculate the maximum count of any letter in a word
int maxRepeatedLetterCount(const string &word) {
    unordered_map<char, int> letterCount;
    int maxCount = 0;

    for (char ch : word) {
        if (isalpha(ch)) {
            char lowerCh = tolower(ch);
            letterCount[lowerCh]++;
            maxCount = max(maxCount, letterCount[lowerCh]);
        }
    }
    return maxCount;
}

// Function to find the word with the highest number of repeated letters
string findWordWithHighestRepeats(const string &str) {
    istringstream stream(str);
    string word, highestWord;
    int highestCount = 0;

    while (stream >> word) {
        int count = maxRepeatedLetterCount(word);
        if (count > highestCount) {
            highestCount = count;
            highestWord = word;
        }
    }
    return highestWord;
}

int main() {
    string str;

    // Get the string input from the user
    cout << "Enter a string: ";
    getline(cin, str);

    // Find and display the word with the highest number of repeated letters
    string result = findWordWithHighestRepeats(str);
    if (!result.empty()) {
        cout << "The word with the highest number of repeated letters is: " << result << endl;
    } else {
        cout << "No words found." << endl;
    }

    return 0;
}
