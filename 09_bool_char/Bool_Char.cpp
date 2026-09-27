//============================================================================
// Name        : Bool_Char.cpp
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
    cout << endl << "-----------------------" << endl;
    cout << "Bool value" << dec << endl;
    cout << "-----------------------" << dec << endl;

    bool bVlaue = true;
    cout << "size of Bool(Byte) = " << sizeof(bool) << endl;
    cout << "bVlaue = " << bVlaue << endl;

    cout << endl << "-----------------------" << endl;
    cout << "Character value" << dec << endl;
    cout << "-----------------------" << dec << endl;

    char cVlaue = 'Z';
    cout << "size of char(Byte) = " << sizeof(char) << endl;
    cout << "cVlaue = " << cVlaue << endl;

    cout << endl << "-----------------------" << endl;
    cout << "Wide  Character value" << dec << endl;
    cout << "-----------------------" << dec << endl;

    wchar_t wcVlaue = 'Z';
    cout << "size of char(Byte) = " << sizeof(wcVlaue) << endl;
    cout << "wcVlaue = " << wcVlaue << endl;
    cout << "wcVlaue = " << (char)wcVlaue << endl;

    return 0;
}
