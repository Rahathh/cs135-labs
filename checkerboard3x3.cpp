/*
Author: Rahat Hassan
Course: CSCI-135
Instructor: Tong Yi
Assignment:Lab 4g

Write a program checkerboard3x3.cpp 
that asks the user to input width 
and height and prints a checkerboard of 3-by-3 squares. 
(It should work even if the input dimensions 
are not a multiple of three.)

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

    // Loop through each row of the checkerboard
    for (int row = 0; row < height; row++) {
        // Determine if we are in a "filled" or "empty" block row (alternates every 3 rows)
        bool filled = (row / 3) % 2 == 0;

        // Loop through each column of the row
        for (int col = 0; col < width; col++) {
            // Determine if we are in a "filled" or "empty" block column (alternates every 3 columns)
            bool isFilledBlock = (col / 3) % 2 == 0;

            // Print '*' for filled blocks, space for empty blocks
            if (filled == isFilledBlock) {
                cout << "*";
            } else {
                cout << " ";
            }
        }

        // Move to the next line after each row
        cout << endl;
    }

    return 0;
}
