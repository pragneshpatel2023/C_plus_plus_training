//============================================================================
// Name        : Comparing_float.cpp
// Author      : Pragnesh Patel
// Version     :
// Copyright   : Your copyright notice
// Description : Testing code for c++
//============================================================================
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float value = 1.1;

    if (value == 1.1)
    {
        cout << "equal" << endl;
    }
    else
    {
        cout << "not equal" << endl;
    }

    cout << setprecision(10) <<  value << endl;

    return 0;
}
