/*
Author: Rahat Hassan
Course: CSCI-135
Instructor: Tong Yi
Assignment:Lab 4e

Write a program 
Write a program trapezoid.cpp that prints an upside-down 
trapezoid of given width and height.

However, if the input height is impossibly large for the given width, 
then the program should report, Impossible shape!
*/
#include <iostream>

using namespace std;

int main() {
    int width, height;

    // Input the width and height
    cout << "Input width: " << endl;
    cin >> width;

    cout << "Input height: " << endl;
    cin >> height;

    // Check if the shape is possible
    if (height > (width + 1) / 2) {
        cout << "Impossible shape!" << endl;
    } else {
        // Print the upside-down trapezoid
        for (int i = 0; i < height; i++) {
            // Print leading spaces
            for (int j = 0; j < i; j++) {
                cout << " ";
            }
            // Print stars
            for (int k = 0; k < width - 2 * i; k++) {
                cout << "*";
            }
            cout << endl;  // Move to the next line after each row
        }
    }

    return 0;
}
