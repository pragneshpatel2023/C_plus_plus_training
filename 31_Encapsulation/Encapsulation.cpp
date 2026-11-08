//============================================================================
// Name        : Encapsulation.cpp
// Author      : Pragnesh Patel
// Version     :
// Copyright   : Your copyright notice
// Description : Testing code for c++
//============================================================================
#include <iostream>
#include <string>

using namespace std;

class BankAccount
{
private:
     // Hidden data members - cannot be accessed directly from outside
     string accountHolder;
     double balance;

public:
     // Constructor to initialize data
     BankAccount(string name, double initialBalance)
     {
          accountHolder = name;
          if (initialBalance >= 0)
          {
               balance = initialBalance;
          }
          else
          {
               balance = 0; // Guard clause against invalid input
          }
     }

     // Getter Method (Read-Only Access)
     double getBalance() const
     {
          return balance;
     }

     // Setter Method (Controlled Write Access with Validation)
     void deposit(double amount)
     {
          if (amount > 0)
          {
               balance += amount;
               cout << "Deposited: $" << amount << "\n";
          }
          else
          {
               cout << "Invalid deposit amount!\n";
          }
     }
};

int main()
{
     BankAccount myAccount("Alice", 500.0);

     // myAccount.balance = -1000; //  COMPILE ERROR: 'balance' is private!

     // Accessing data safely through public methods
     myAccount.deposit(150.0);
     cout << "Current Balance: $" << myAccount.getBalance() << "\n";

     return 0;
}
