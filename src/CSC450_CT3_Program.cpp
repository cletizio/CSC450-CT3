//============================================================================
// Name        : CSC450_CT3_Program.cpp
// Author      : Chris Letizio
// Version     : 1.0
// Copyright   :
// Description : C++ program that allows user to enter values, then displays them
//               via pointers.
//============================================================================

#include <iostream>
using namespace std;

int main() {
    // Variables to store user input
    int value1, value2, value3;

    // Get user input
    cout << "Enter three integer values:\n";
    cin >> value1 >> value2 >> value3;

    // Create integer pointers and allocate dynamic memory
    int *ptr1 = new int(value1);
    int *ptr2 = new int(value2);
    int *ptr3 = new int(value3);

    // Display the contents of variables and pointers
    cout << "\nContents of Variables:\n";
    cout << "Value 1: " << value1 << endl;
    cout << "Value 2: " << value2 << endl;
    cout << "Value 3: " << value3 << endl;

    cout << "\nContents of Pointers:\n";
    cout << "Pointer 1: " << *ptr1 << endl;
    cout << "Pointer 2: " << *ptr2 << endl;
    cout << "Pointer 3: " << *ptr3 << endl;

    // Deallocate dynamic memory using delete
    delete ptr1;
    delete ptr2;
    delete ptr3;

    return 0;
}
