/*
Author: Rahat Hassan
Course: CSCI-135
Instructor: Tong Yi
Assignment: HW 1.7


Writing 3 names and printing each of them, everyone one in a new line

*/
#include <iostream>
using namespace std;

int main() {
    string name1, name2, name3;

    cout << "Please enter best friend #1: " << endl;
    cin >> name1;
    cout << "Please enter best friend #2: " << endl;
    cin >> name2;
    cout << "Please enter best friend #3: " << endl;
    cin >> name3;

    cout << name1 << endl;
    cout << name2 << endl;
    cout << name3 << endl;

    return 0;
}
