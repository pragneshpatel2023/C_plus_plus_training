//============================================================================
// Name        : BankAccount.h
// Author      : Pragnesh Patel
// Version     :
// Copyright   : Your copyright notice
// Description : Header file to print a message.
//============================================================================
#ifndef BANKACCOUNT_H_
#define BANKACCOUNT_H_

#include <string>

using namespace std;

/**
 * @class BankAccount
 * @brief Represents a simple bank account with an owner and balance.
 *
 * This class provides methods to access and modify account details,
 * including the account owner and balance, with basic validation.
 */
class BankAccount
{
private:
    /**
     * @brief The name of the account owner.
     *
     * Stored as a string and hidden from direct external access.
     */
    string owner;

    /**
     * @brief The current balance of the account.
     *
     * A double value representing the account balance.
     * Hidden from direct external access to ensure controlled updates.
     */
    double balance;

public:
    /**
     * @brief Constructs a new BankAccount object.
     *
     * @param accountOwner The name of the account owner.
     * @param initialBalance The starting balance of the account.
     */
    BankAccount(std::string accountOwner, double initialBalance);

    /**
     * @brief Retrieves the account owner's name.
     *
     * @return The name of the account owner as a string.
     */
    string getOwner();

    /**
     * @brief Updates the account owner's name.
     *
     * @param newOwner The new name to assign to the account owner.
     */
    void setOwner(std::string newOwner);

    /**
     * @brief Retrieves the current account balance.
     *
     * @return The balance as a double.
     */
    double getBalance();

    /**
     * @brief Updates the account balance.
     *
     * Includes data validation to ensure the balance remains valid.
     *
     * @param newBalance The new balance to set.
     */
    void setBalance(double newBalance);
};

#endif /* BANKACCOUNT_H_ */