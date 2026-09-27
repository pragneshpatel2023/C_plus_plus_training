//============================================================================
// Name        : Integer.cpp
// Author      : Pragnesh Patel
// Version     :
// Copyright   : Your copyright notice
// Description : Testing code for c++
//============================================================================
#include <iostream>
#include <climits>


using namespace std;

int main()
{
    cout << endl << "-----------------------" << endl;
    cout << "short Integer value" << dec << endl;
    cout << "-----------------------" << dec << endl;

    short int sValue = 223;

    cout << sValue << " | 0x"<< hex << sValue << endl;
    cout << dec << sizeof(sValue) << " | 0x"<< hex << sizeof(short int) << endl;

    cout << dec << SHRT_MAX << " | 0x" <<  hex << SHRT_MAX << endl;
    cout << dec << SHRT_MIN << " | 0x" <<  hex << static_cast<unsigned short>(SHRT_MIN) << endl;

    cout << dec << USHRT_MAX << " | 0x" <<  hex << USHRT_MAX << endl;

    cout << endl << "-----------------------" << dec << endl;
    cout << "Integer value" <<  endl;
    cout << "-----------------------" << dec << endl;

    int value = 2654;

    cout << value << " | 0x"<< hex << value << endl;
    cout << dec << sizeof(value) << " | 0x"<< hex << sizeof(int) << endl;

    cout << dec << INT_MAX << " | 0x" <<  hex << INT_MAX << endl;
    cout << dec << INT_MIN << " | 0x" <<  hex << INT_MIN << endl;

    cout << dec << UINT_MAX << " | 0x" <<  hex << UINT_MAX << endl;

    cout << endl << "-----------------------" <<  endl;
    cout << "Long Integer value" <<  endl;
    cout << "-----------------------" << dec << endl;

    long int lvalue = 22323;

    cout << lvalue << " | 0x"<< hex << lvalue << endl;
    cout << dec << sizeof(lvalue) << " | 0x"<< hex << sizeof(long int) << endl;

    cout << dec << LONG_MAX << " | 0x" <<  hex << LONG_MAX << endl;
    cout << dec << LONG_MIN << " | 0x" <<  hex << LONG_MIN << endl;

    cout << dec << ULONG_MAX << " | 0x" <<  hex << ULONG_MAX << endl;

    return 0;
}
