//============================================================================
// Name        : Floating_point_unit.cpp
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
    cout << endl
         << "-----------------------" << endl;
    cout << "Float value" << dec << endl;
    cout << "-----------------------" << dec << endl;

    float fValue = 123456789.123456789123456789123456789;

    cout << "size of float = " << sizeof(fValue) << endl;
    cout << fValue << endl;
    cout << fixed << fValue << endl;
    cout << setprecision(25) << fValue << endl;

    cout << endl
         << "-----------------------" << endl;
    cout << "Double value" << dec << endl;
    cout << "-----------------------" << dec << endl;

    double dValue = 123456789.123456789123456789123456789;

    cout << "size of double = " << sizeof(dValue) << endl;
    cout << dValue << endl;
    cout << fixed << dValue << endl;
    cout << setprecision(25) << dValue << endl;

    cout << endl
         << "-----------------------" << endl;
    cout << "Long Double value = " << dec << endl;
    cout << "-----------------------" << dec << endl;

    long double ldValue = 123456789.123456789123456789123456789;

    cout << "size of long double = " << sizeof(ldValue) << endl;
    cout << ldValue << endl;
    cout << fixed << ldValue << endl;
    cout << setprecision(25) << ldValue << endl;

    return 0;
}
