/*
Author: Rahat Hassan
Course: CSCI-135
Instructor: Tong Yi
Assignment:Lab 4d

Write a program 
Write a program lower.cpp that prints 
the bottom-left half of a 
square, given the side 
length.
*/
#include <iostream>
using namespace std;

int main() {
    int side_length;

    // Input the side length
    cout << "Input side length: ";
    cin >> side_length;

    // Print the bottom-left half of the square
    for (int i = 1; i <= side_length; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;  // Move to the next line after each row
    }

    return 0;
}
