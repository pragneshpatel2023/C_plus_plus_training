//============================================================================
// Name        : Reversion_String.cpp
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
    char name[] = "Pragnesh123";
    char *Start = name;

    // Subtract 1 to exclude the null terminator '\0'
    int noOfChars = sizeof(name) - 1;

    std::cout << sizeof(name) << std::endl;

    // Move to the last valid character (noOfChars - 1)
    char* End = Start + (noOfChars - 1);

    cout << name << endl;
    while(End > Start)
    {
        char backup = *Start;
        *Start = *End;
        *End = backup;
        Start++;
        End--;
    }
    cout << name << endl;

    return 0;
}