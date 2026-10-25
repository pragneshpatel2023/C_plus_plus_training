//============================================================================
// Name        : Data_Members.cpp
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
    Cat cat1;

    cat1.happy = false;
    cat1.makeHappy();
    cat1.speak();

    Cat cat2;
    cat2.happy = true;
    cat2.makeSad();
    cat2.speak();

    return 0;
}