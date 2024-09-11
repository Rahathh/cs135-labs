
/*
Author: Rahat Hassan
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab2C

Write a program edit-array.cpp that creates an array of 10 integers, and provides the user with an interface to edit any of its elements. Specifically, it should work as follows:
Create an array myData of 10 integers.
Fill all its cells with value 1 (using a for loop).
Print all elements of the array on the screen.
Ask the user to input the cell index i, and its new value v.
If the index i is within the array range (0 ≤ i < 10), update the asked cell, myData[i] = v, and go back to the step 3. Otherwise, if index i is out of range, the program exits.
*/

#include <iostream>
using namespace std;

int main() {
    int myData[10] = {};

    for (int i = 0; i < 10; i++) {
        myData[i] = 1;
        cout << myData[i] << " ";
    }

    int index, value;

    while (index >= 0 && index < 10) {
        cout << "\n\nInput index: " << endl;
        cin >> index;
        cout << "Input value: " << endl;
        cin >> value;

        for (int i = 0; i < 10; i++) {
            if (index >= 0 && index < 10) {
                myData[index] = value;
                cout << myData[i] << " ";
            }
        }
    }
    if (index < 0 || index > 9) {
        cout << "Index out of range. Exit" << endl;
    }

    return 0;
}
