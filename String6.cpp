#include <iostream>
#include <string>
#include <vector>
using namespace std;

const vector<string> lessThan20 = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", 
                                    "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
const vector<string> tens = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
const vector<string> thousands = {"", "Thousand", "Million", "Billion"};

string convertLessThan1000(int num) {
    string result;
    if (num >= 100) {
        result += lessThan20[num / 100] + " Hundred ";
        num %= 100;
    }
    if (num >= 20) {
        result += tens[num / 10] + " ";
        num %= 10;
    }
    if (num > 0) {
        result += lessThan20[num] + " ";
    }
    return result;
}

string numberToWords(int num) {
    if (num == 0) return "Zero";

    string result;
    int i = 0;

    while (num > 0) {
        if (num % 1000 != 0) {
            result = convertLessThan1000(num % 1000) + thousands[i] + " " + result;
        }
        num /= 1000;
        i++;
    }

    // Trim trailing spaces
    while (result.back() == ' ') {
        result.pop_back();
    }

    return result;
}

int main() {
    int num;

    // Get the integer input from the user
    cout << "Enter a non-negative integer: ";
    cin >> num;

    if (num < 0) {
        cout << "The number must be non-negative." << endl;
        return 1;
    }

    // Convert the number to words and display the result
    cout << "The number in English words is: " << numberToWords(num) << endl;

    return 0;
}
