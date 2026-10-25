//============================================================================
// Name        : Function.cpp
// Author      : Pragnesh Patel
// Version     :
// Copyright   : Your copyright notice
// Description : Testing code for c++
//============================================================================
#include <iostream>

#include "Print_Msg.h"

using namespace std;

/**
 * @brief Function declaration (prototype) for adding two integers.
 *
 * This tells the compiler that the function `addNumbers` exists
 * and specifies its return type and parameter types.
 *
 * @param a First integer value.
 * @param b Second integer value.
 * @return The sum of the two integers.
 */

static int addNumbers(int a, int b);

int main()
{
    int num1 = 10;
    int num2 = 20;

    print_Message();

    // We call the function by its name and pass the required variables (arguments).
    int sum = addNumbers(num1, num2);

    cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << endl;

    return 0;
}

// 3. Function Definition
// This contains the actual code/logic of the function.
int addNumbers(int a, int b)
{
    int result = a + b;
    return result; // Sends the computed value back to main()
}