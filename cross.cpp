/*
Author: Rahat Hassan
Course: CSCI-135
Instructor: Tong Yi
Assignment:Lab 4a

Write a program 
Write a program cross.cpp that asks the user to 
input the shape size, and prints
a diagonal cross of that 
dimension.

*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Input size: " << endl;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j == i || j == (n - 1 - i)) {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
