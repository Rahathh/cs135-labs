/*
Author: Rahat Hassan
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab1C


In C++, operator % computes the remainder of the 
division of x by y. For example, 37 % 10 returns 7, 
because this is the remainder of 37 when divided by 10.

*/


#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter year: ";
    cin >> year;
    if (year % 4 != 0) {
        cout << "Common year";
    }
    else if (year % 100 != 0) {
        cout << "Leap year";
    }
    else if (year % 400 != 0) {
        cout << "Common year";
    }
    else {
        cout << "Leap year";
    }
    return 0;
}
