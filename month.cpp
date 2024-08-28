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
    int year, month;
    cout << "Enter year: ";
    cin >> year;
    cout << "Enter month: ";
    cin >> month;

    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        cout << "31 days";
    }
    else if (month == 2) {
        if (year % 4 != 0 && year % 100 == 0 || year % 400 != 0) {
            cout << "28 days";
        }
        else {
            cout << "29 days";
        }
    } else {
        cout << "30 days";
    }
    return 0;
}
