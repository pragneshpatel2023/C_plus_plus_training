//============================================================================
// Name        : Person.cpp
// Author      : Pragnesh Patel
// Version     :
// Copyright   : Your copyright notice
// Description : Source file to print a message.
//============================================================================
#include <iostream>

#include "Person.h"

using namespace std;

Person::Person()
{
    name = "Unknown";
    age = 0;
}

void Person::display()
{
    cout << "Name: " << name << ", Age: " << age << "\n";
}
