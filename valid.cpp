
/*
Author: Rahat Hassan
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab2A


Write a program valid.cpp, which asks the user to input an integer in the range 0 < n < 100.
If the number is out of range, the program should 
keep asking to re-enter until a valid number is input.

After a valid value is obtained, print this number n squared.

*/

#include <iostream>
using namespace std;

int main() {
	int num;
	cout << "Please enter an integer: ";
	cin >> num;
	while (num < 0 || num > 100) {
		cout << "Please re-enter: ";
		cin >> num;
		if (num > 0 && num < 100) {
			cout << "Number squared is" << " " << pow(num, 2);
		}
	}
	return 0;
}
