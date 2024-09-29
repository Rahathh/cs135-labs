/*
Author: Rahat Hassan
Course: CSCI-135
Instructor: Tong Yi
Assignment:Lab 4b

Write a program 

Write a program checkerboard.cpp that asks the user to input width 
and height and prints a rectangular checkerboard of the requested
size using asterisks and
spaces (alternating).

*/
#include <iostream>
using namespace std;

int main() {
    int width, height;
    cout << "Input width: ";
    cin >> width;
    cout << "Input height: ";
    cin >> height;

    for (int n = 0; n < height; n++) {
        for (int i = 0; i < width; i++) {
            // Check if the row is even or odd to alternate starting character
            if ((n + i) % 2 == 0) {
                cout << "*";
            }
            else {
                cout << " "; // Two spaces to match the width of "* "
            }
        }
        cout << endl;
    }
    return 0;
}
