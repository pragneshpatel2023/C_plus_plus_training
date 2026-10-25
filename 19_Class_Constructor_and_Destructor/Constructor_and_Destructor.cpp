//============================================================================
// Name        : Class_Constructor_and_Destructor.cpp
// Author      : Pragnesh Patel
// Version     :
// Copyright   : Your copyright notice
// Description : Testing code for c++
//============================================================================
#include <iostream>

#include "Cat.h"

using namespace std;

int main()
{


    cout << "------------- Code started ------------" << endl;

    Cat cat1;
    cat1.speak();

    {
        Cat cat2;
        cat2.speak2();
    }

    cout << "------------- Code end ------------" << endl;

    return 0;
}