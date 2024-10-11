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

bool isDivisibleBy(int n, int d) {
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

int nextPrime(int n) {
    int candidate = n + 1;
    while (!isPrime(candidate)) {
        candidate++;
    }
    return candidate;
}

int countPrimes(int a, int b) {
    int count = 0;
    for (int i = a; i <= b; i++) {
        if (isPrime(i)) {
            count++;
        }
    }
    return count;
}

bool isTwinPrime(int n) {
    if (!isPrime(n)) {
        return false;
    }
    return (isPrime(n - 2) || isPrime(n + 2));
}

int nextTwinPrime(int n) {
    int candidate = n + 1;
    while (!isTwinPrime(candidate)) {
        candidate++;
    }
    return candidate;
}

int largestTwinPrime(int a, int b) {
    for (int i = b; i >= a; i--) {
        if (isTwinPrime(i)) {
            return i;
        }
    }
    return -1;  // No twin prime found
}

int main() {
    int num1, num2, num3, a, b;

    // Part 1: Divisibility test
    cout << "Enter the first integer number: ";
    cin >> num1;
    cout << "Enter the second integer number: ";
    cin >> num2;
    cout << "Enter the third integer number: ";
    cin >> num3;

    if (num1 % num2 == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    // Part 2: Prime check
    if (isPrime(num3)) {
        cout << num3 << " is a prime number." << endl;
    } else {
        cout << num3 << " is not a prime number." << endl;
    }

    // Part 3: Next prime test
    cout << "The next prime after " << num3 << " is " << nextPrime(num3) << "." << endl;

    // Part 4: Count primes in range
    cout << "Enter the range (a and b) to count primes (a ≤ x ≤ b):" << endl;
    cin >> a >> b;
    cout << "The number of primes between " << a << " and " << b << " is " << countPrimes(a, b) << "." << endl;

    // Part 5: Twin prime check
    cout << "Enter a number to check if it is a twin prime: ";
    int twinPrimeCandidate;
    cin >> twinPrimeCandidate;
    if (isTwinPrime(twinPrimeCandidate)) {
        cout << twinPrimeCandidate << " is a twin prime." << endl;
    } else {
        cout << twinPrimeCandidate << " is not a twin prime." << endl;
    }

    // Part 6: Next twin prime test
    cout << "The next twin prime after " << twinPrimeCandidate << " is " << nextTwinPrime(twinPrimeCandidate) << "." << endl;

    // Part 7: Largest twin prime in range
    cout << "Enter the range (a and b) to find the largest twin prime: ";
    cin >> a >> b;
    int largestTwin = largestTwinPrime(a, b);
    if (largestTwin == -1) {
        cout << "There are no twin primes in the range " << a << " to " << b << "." << endl;
    } else {
        cout << "The largest twin prime between " << a << " and " << b << " is " << largestTwin << "." << endl;
    }

    return 0;
}




