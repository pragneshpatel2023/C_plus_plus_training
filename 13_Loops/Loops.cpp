//============================================================================
// Name        : Loops.cpp
// Author      : Pragnesh Patel
// Version     :
// Copyright   : Your copyright notice
// Description : Testing code for c++
//============================================================================
#include <iostream>

using namespace std;

int main()
{
    cout << endl
         << "-----------------------" << endl;
    cout << "      For loop         " << endl;
    cout << "-----------------------" << endl;

     int numbers[] = {10, 20, 30, 40, 50};

     // Automatically loops through each item in the array
     for (int num : numbers)
     {
          cout << "Value: " << num << endl;
     }


     cout << endl
          << "-----------------------" << endl;
     cout << "      While loop         " << endl;
     cout << "-----------------------" << endl;

     int count = 1; // Initialization

     // Loops until count is greater than 3
     while (count <= 3)
     {
          cout << "Count is: " << count << endl;
          count++; // Update expression
     }


     cout << endl
          << "-----------------------" << endl;
     cout << "      Do While loop   " << endl;
     cout << "-----------------------" << endl;

     int i = 10;

     // This block runs once even though i is already greater than 5
     do
     {
          cout << "This will print exactly once. i = " << i << endl;
          i++;
     } while (i <= 5);


     cout << endl
          << "------------------------------------" << endl;
     cout << " Loop Control: break and continue   " << endl;
     cout << "------------------------------------" << endl;

     for (int i = 1; i <= 10 ; i++)
     {
          if (i == 2)
          {
               continue; // Skips printing 2
          }

          if (i == 5)
          {
               break; // Exits the loop before printing 5
          }
          cout << "break and continue" << " ";
          cout << i << " " << endl;

     }
     return 0;
}
