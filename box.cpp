/*

Author: Rahat Hassan

Course: CSCI-135

Instructor: Tong Yi

Assignment:Lab 4a


Write a program 

Write a program box.cpp that asks the user to input width and height and prints a solid rectangular box of the requested size using asterisks.

Also, print a line Shape: between user input and the printed shape (to separate input from output).

*/
#include <iostream>

using namespace std;

int main() {
    int width, height;
    
    cout << "Input width: " << endl;
    cin >> width;

    cout << "Input height: " << endl;
    cin >> height;

    for (int n = 0; n < height; n++) {
        for (int i = 0; i < width; i++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

