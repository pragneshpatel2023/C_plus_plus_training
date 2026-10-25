//============================================================================
// Name        : New_Keyword.cpp
// Author      : Pragnesh Patel
// Version     :
// Copyright   : Your copyright notice
// Description : Testing code for c++
//============================================================================
#include <iostream>

using namespace std;

// Defining a custom namespace
namespace Logistics
{
    int shipCount = 5;
    void deliver()
    {
        std::cout << "Delivering packages..." << std::endl;
    }
}

int main()
{
    // Accessing elements using the scope resolution operator (::)
    Logistics::deliver();
    std::cout << "Ships: " << Logistics::shipCount << std::endl;
    return 0;
}