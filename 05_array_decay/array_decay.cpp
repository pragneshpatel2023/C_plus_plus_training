//============================================================================
// Name        : array decay.cpp
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

void DisplayValue(int *p) {
   cout << "New size of array by passing the value : ";
   cout << sizeof(p) << endl;
}
void DisplayPointer(int (*p)[10]) {
   cout << "New size of array by passing the pointer : ";
   cout << sizeof(p) << endl;
}
int main() {
   
   int arr[10] = {1, 2, };
   cout << "Actual size of array is : ";
   cout << sizeof(arr) << endl;
   DisplayValue(arr);
   DisplayPointer(&arr);
   return 0;
}
