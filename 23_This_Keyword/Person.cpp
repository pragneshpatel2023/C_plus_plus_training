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

Person::Person(string personName, int personAge)
{
    this->name = personName;
    this->age = personAge;
    cout << "Memory location of  this object" << this << endl;
}

void Person::display()
{
    std::cout << "Name: " << name << ", Age: " << age << "\n";
}
