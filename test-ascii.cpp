/*
Author: Rahat Hassan
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 6A

Write a program test-ascii.cpp that asks the user to input a line of text 
(which may possibly include spaces). The program should report all characters 
from the input line together with their ASCII codes.

Make sure to print exactly one space between the character and it’s code.


Hint:
When you are printing a value of type char on the screen, it is normally shown as a symbol. 
To print it as a number (as its ASCII code), type cast it to integer:
*/

#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string str;
    cout << "Input: ";
    getline(cin, str);

    for(int i = 0; i < str.length(); i++) {
        char c = str[i];
        cout << c << " " << int(c) << endl; // converts the character of str into ascii based on input
    }

    return 0;
}
