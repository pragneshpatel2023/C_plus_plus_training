//============================================================================
// Name        : Constructor_Initialization_List.cpp
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
    Person person1;
    Person person2("Bob", 25);

    // Display initial states
    person1.display();
    person2.display();
    return 0;
}