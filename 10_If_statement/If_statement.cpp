//============================================================================
// Name        : If_statement.cpp
// Author      : Pragnesh Patel
// Version     :
// Copyright   : Your copyright notice
// Description : Testing code for c++
//============================================================================
#include <iostream>

using namespace std;

int main()
{

    string input;
    string password = "hello";
    cout << "Enter your password = " << flush;

    cin >> input;

    if (input == password)
    {
        cout << "PASS " << endl
             << flush;
    }

    if (input != password)
    {
        cout << "FAIL " << endl
             << flush;
    }

    return 0;
}
