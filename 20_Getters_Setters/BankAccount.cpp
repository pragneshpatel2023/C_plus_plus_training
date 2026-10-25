//============================================================================
// Name        : BankAccount.cpp
// Author      : Pragnesh Patel
// Version     :
// Copyright   : Your copyright notice
// Description : Source file to print a message.
//============================================================================
#include <iostream>

#include "BankAccount.h"

using namespace std;

BankAccount::BankAccount(string accountOwner, double initialBalance)
{
    owner = accountOwner;
    // Using the setter inside the constructor ensures data validation applies
    setBalance(initialBalance);
}

string BankAccount::getOwner()
{
    return owner;
}

void BankAccount::setOwner(string newOwner)
{
    if (!newOwner.empty())
    {
        owner = newOwner;
    }
}


double BankAccount::getBalance()
{
    return balance;
}

void BankAccount::setBalance(double newBalance)
{
    if (newBalance >= 0.0)
    {
        balance = newBalance;
    }
    else
    {
        cout << "Error: Balance cannot be negative. Setting to 0.\n";
        balance = 0.0;
    }
}
