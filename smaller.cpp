/*
Author: Rahat Hassan
Course: CSCI-5
Instructor: Tong Yi
Assignment: Lab1A

Write a program smaller.cpp that asks the user to input two integer numbers 
and prints out the smaller of the two.

*/


#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    if(num1 < num2){
        cout << "The smaller of the two is" << " " << num1;
    } else{
        cout << "The smaller of the two is" << " " <<  num2;
    }

    return 0;
}
