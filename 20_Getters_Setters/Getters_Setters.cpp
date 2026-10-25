//============================================================================
// Name        : Getters_Setters.cpp
// Author      : Pragnesh Patel
// Version     :
// Copyright   : Your copyright notice
// Description : Testing code for c++
//============================================================================
#include <iostream>

#include "BankAccount.h"

using namespace std;

int main()
{


    cout << "------------- Code started ------------" << endl;

    BankAccount account("Pragnesh", 2000);

    // Modifying data via Setter
    account.setBalance(650.50);
    account.setBalance(-20.00); // Trigger validation error

    // Accessing data via Getter
    std::cout << account.getOwner() << "'s balance is: $" << account.getBalance() << "\n";


    cout << "------------- Code end ------------" << endl;

    return 0;
}