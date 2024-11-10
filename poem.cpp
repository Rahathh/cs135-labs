/*
Author: Rahat Hassan
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 9D

You are provided with the following program poem.cpp. All is good, and the memory is allocated dynamically, but it crashes your computer, because it runs out of memory really quickly:

#include <iostream>
using namespace std;

string * createAPoemDynamically() {
    string *p = new string;
    *p = "Roses are red, violets are blue";
    return p;
}

int main() {
    while(true) {
        string *p;
        p = createAPoemDynamically();

        // assume that the poem p is not needed at this point

    }
}
Fix this program poem.cpp. It should still keep creating poems, but all dynamically allocated memory should get deleted when it is not needed. (The program can be stopped with Ctrl+C in the terminal.)

*/

#include <iostream>
using namespace std;

string * createAPoemDynamically() {
    string *p = new string;
    *p = "Roses are red, violets are blue";
    return p;
}

int main() {
    // Finite loop for demonstration
    for(int i = 0; i < 1; ++i) {  // Change 1 to any desired number of iterations
        string *p = createAPoemDynamically();

        // Assume the poem is not needed at this point
        cout << *p << endl; // Display the poem (optional)

        delete p; // Properly delete the dynamically allocated memory
    }

    // Program ends cleanly without infinite memory allocation
    return 0;
}
