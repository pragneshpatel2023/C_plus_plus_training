//============================================================================
// Name        : This_Keyword.cpp
// Author      : Pragnesh Patel
// Version     :
// Copyright   : Your copyright notice
// Description : Testing code for c++
//============================================================================
#include <iostream>

#include "Person.h"

using namespace std;

int main()
{
    Person person1("Sam", 40);
    Person person2("Alice", 36);
    Person person3("Bob", 25);

    // Display initial states
    person1.display();
    person2.display();
    person3.display();

    cout << "Memory location of  this class object " << &person1 << endl;
    cout << "Memory location of  this class object " << &person2 << endl;
    cout << "Memory location of  this class object " << &person3 << endl;

    return 0;
}