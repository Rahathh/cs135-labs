/*
Author: Rahat Hassan
Course: CSCI-35
Instructor: Tong Yi
Assignment: Lab5A

Write a program numbers.cpp that defines a function

bool isDivisibleBy(int n, int d);
If n is divisible by d, 
the function should 
return true, otherwise return false.
*/
#include <iostream>
using namespace std;

bool isDivisibleBy(int n, int d){
	return (n % d) == 0;
	}
	int main() {
		int num1, num2;
		cout << "Enter the first integer number: ";
		cin >> num1;
		cout << "Etner the second integer number: ";
		cin >> num2;
		isDivisibleBy(num1, num2);
			if (num1 % num2 == 0) {
				cout << "Yes" << endl;
			}
			else {
				cout << "No" << endl;
			}
		}
