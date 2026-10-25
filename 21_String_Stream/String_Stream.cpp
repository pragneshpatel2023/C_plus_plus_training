//============================================================================
// Name        : String_Stream.cpp
// Author      : Pragnesh Patel
// Version     :
// Copyright   : Your copyright notice
// Description : Testing code for c++
//============================================================================
#include <iostream>
#include <sstream>


using namespace std;

int main()
{
    string name = "Pragnesh";
    int age = 29;

    stringstream ss;

    ss << " Name is ";
    ss << name << endl;
    ss << " Age is ";
    ss << age << endl;

    string info = ss.str();

    cout << info << endl;
    return 0;
}