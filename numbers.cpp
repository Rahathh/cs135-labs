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

Lab5b
figure out if its a prime number

*/

#include <iostream>
using namespace std;

bool isDivisibleBy(int n, int d){
	if (d == 0) {
		cout << "No" << endl;
		return false;
	}
	return (n % d) == 0;
	}
bool isPrime(int n) {
	if (n <= 1) {
		return false;
	}
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}
	int main() {
		int num1, num2, num3;
		cout << "Enter the first integer number: ";
		cin >> num1;
		cout << "Enter the second integer number: ";
		cin >> num2;
		cout << "Enter the third integer number: ";
		cin >> num3;
		isDivisibleBy(num1, num2);
			if (num1 % num2 == 0) {
				cout << "Yes" << endl;
			}
			else {
				cout << "No" << endl;
			}
			if (isPrime(num3)) {
				cout << num3 << " " << "is a prime number." << endl;
			}
			else {
				cout << num3 << " " << "is not a prime number." << endl;
			}
	}
