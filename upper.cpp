/*
Author: Rahat Hassan
Course: CSCI-135
Instructor: Tong Yi
Assignment:Lab 4e

Write a program 
Write a program upper.cpp that
prints the top-right half
of a square, given the 
side length.
*/
#include <iostream>

using namespace std;

int main() {
    int side_length;

    // Input the side length
    cout << "Input side length: " << endl;
    cin >> side_length;

    // Print the top-right half of the square
    for (int i = 0; i < side_length; i++) {
        // Print leading spaces
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        // Print stars
        for (int k = 0; k < side_length - i; k++) {
            cout << "*";
        }
        cout << endl;  // Move to the next line after each row
    }

    return 0;
}
