/*
 Description: Using a recursion algorithm to decide the input is a
 palindrone or not.
 Author: Grace O'Hara
 Date: December 11, 2023
*/

#include <iostream>
#include <iostream>
#include <cctype>
#include <stdexcept>
using namespace std;

bool isAlpha(char c) {
    return isalpha(static_cast<unsigned char>(c));
}

bool isPalindrome(const string& str, size_t start, size_t end) {
    if (start >= end) {
        return true;
    }

    if (str[start] != str[end])
    {
        return false;
    }

    return isPalindrome(str, start + 1, end - 1);
}

int main() {
    try {
        string input;

        cout << "Enter a string (letters only): ";
        cin >> input;

        for (char c : input) {
            if (!isAlpha(c)) {
                throw invalid_argument("The Input should only consist of letters.");
            }
        }
        transform(input.begin(), input.end(), input.begin(), ::toupper);
        cout << "The input in all capitals: " << input << endl;
        
        if (isPalindrome(input, 0, input.length() - 1)) {
            cout << "The entered string is a palindrome." << endl;
        } else {
            cout << "The entered string is not a palindrome." << endl;
        }

    } catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}

