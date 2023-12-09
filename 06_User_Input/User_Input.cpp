//============================================================================
// Name        : User_Input.cpp
// Author      : Pragnesh Patel
// Version     :
// Copyright   : Your copyright notice
// Description : 
//              What is Array Decay in C++?
//               -> he loss of type and dimensions of an array is known as array decay. 
//               It occurs when we pass the array into a function by pointer or value. 
//               First address is sent to the array which is a pointer. 
//               That is why, the size of array is not the original one.
//============================================================================
#include<iostream>

using namespace std;

int main() {
    string name = {0};
    int age = 0;
    cout << "Enter Your name ";
    cin >> name;
    cout << "Your name is " << name << endl;

    cout << "Enter Your age ";
    cin >> age;
    cout << "Your age is " << age << endl;


   return 0;
}
