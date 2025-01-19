#include <iostream>
#include <string>
using namespace std;

// Function to convert a number less than 20 to words
string oneToNineteen(int num) {
    string words[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine",
                      "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    return words[num];
}

// Function to convert tens place numbers to words
string tens(int num) {
    string words[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
    return words[num];
}

// Function to convert numbers below 1000 to words
string convertBelowThousand(int num) {
    string result;
    if (num >= 100) {
        result += oneToNineteen(num / 100) + " Hundred";
        num %= 100;
        if (num) result += " ";
    }
    if (num >= 20) {
        result += tens(num / 10);
        num %= 10;
        if (num) result += " " + oneToNineteen(num);
    } else if (num > 0) {
        result += oneToNineteen(num);
    }
    return result;
}

// Function to convert any number into words
string numberToWords(int num) {
    if (num == 0) return "Zero";

    string result;
    string units[] = {"", " Thousand", " Million", " Billion"};

    for (int i = 0; num > 0; ++i) {
        if (num % 1000 != 0) {
            string chunk = convertBelowThousand(num % 1000);
            result = chunk + units[i] + (result.empty() ? "" : " " + result);
        }
        num /= 1000;
    }
    return result;
}

// Main function to test the program
int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    cout << "Number in words: " << numberToWords(n) << endl;
    return 0;
}
