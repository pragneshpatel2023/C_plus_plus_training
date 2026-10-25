//============================================================================
// Name        : Constructor_Overloading.cpp
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
    std::cout << "--- Initializing Persons using 3 Variations ---\n";

    // Variation 1: Calls default constructor
    Person person1;

    // Variation 2: Calls name-only constructor
    Person person2("Alice");

    // Variation 3: Calls full parameterized constructor
    Person person3("Bob", 25);

    // Display initial states
    person1.display();
    person2.display();
    person3.display();

    std::cout << "\n--- Modifying Details using Setter Function ---\n";

    // Changing the name and age of the objects
    person1.updateDetails("Charlie", 30);
    person2.updateDetails("Alice Smith", 19);
    person3.updateDetails("Robert", 26);

    // Display updated states
    person1.display();
    person2.display();
    person3.display();

    return 0;
}