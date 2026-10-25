//============================================================================
// Name        : Reversion_String.cpp
// Author      : Pragnesh Patel
// Version     :
// Copyright   : Your copyright notice
// Description : Testing code for c++
//============================================================================
#include <iostream>
#include <sstream>


using namespace std;

int main()
{
    int x = 10;
    int y = 20;

    // 1. Pointer to constant data (Data cannot change, Pointer CAN change)
    const int* ptr1 = &x;

    // *ptr1 = 15; // Error! Data is read-only.
    ptr1 = &y;     // OK! Pointer can point somewhere else.

    // 2. Constant pointer to data (Data CAN change, Pointer cannot change)
    int* const ptr2 = &x;
    *ptr2 = 15;    // OK! Data can be modified.
    // ptr2 = &y;  // Error! Pointer address is locked.

    // 3. Constant pointer to constant data (Everything is locked)
    const int* const ptr3 = &x;
    // *ptr3 = 15; // Error!
    // ptr3 = &y;  // Error!
    return 0;
}