//============================================================================
// Name        : Cat.cpp
// Author      : Pragnesh Patel
// Version     :
// Copyright   : Your copyright notice
// Description : Source file to print a message.
//============================================================================
#include <iostream>

#include "Cat.h"

using namespace std;

void Cat::speak()
{
    cout << "Miaow !" << endl << endl;
}

void Cat::speak2()
{
    cout << "Ssssssss !" << endl << endl;
}


Cat::Cat(void)
{
   cout << "Object is being created" << endl;
}

Cat::~Cat(void)
{
   cout << "Object is being deleted" << endl;
}