//============================================================================
// Name        : Print_Msg.cpp
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
    if (happy || mood)
    {
        cout << "Miaow !" << endl << endl;
    }

    if (happy && mood)
    {
        cout << "Sssssss !" << endl << endl;
    }
}

void Cat::makeSad()
{
    mood = false;
}

void Cat::makeHappy()
{
    mood = true;
}