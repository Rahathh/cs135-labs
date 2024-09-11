
/*
Author: Rahat Hassan
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab2B


Write a program print-interval.cpp that asks the user to input two integers L and U (representing the lower and upper limits of the interval), 
and print out all integers in the range L ≤ i < U separated by spaces. 
Notice that we include the lower limit, but exclude the upper limit.

*/

#include <iostream>
using namespace std;

int main(){
  int L, U;
  cout << "Please enter L: ";
  cin >> L;
  cout << "Please enter U: ";
  cin >> U;
  for (int i = L; i < U; i++){
    L = i;
      cout << L << " ";
  }
  return 0;
}
