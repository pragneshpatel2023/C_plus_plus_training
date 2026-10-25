//============================================================================
// Name        : Array.cpp
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
    cout << "     1D Array          " << endl;
    cout << "-----------------------" << endl;

     // Declaration and initialization
     int numbers[5] = {10, 20, 30, 40, 50};

     // Modifying an element (0-indexed, so index 2 is the 3rd element)
     numbers[2] = 99;

     // Accessing elements using a single loop
     cout << "1D Array elements: ";
     for (int i = 0; i < 5; i++)
     {
          cout << numbers[i] << " ";
     }


     cout << endl
          << "-----------------------" << endl;
     cout << "      2D Array         " << endl;
     cout << "-----------------------" << endl;

     // Declares a 2D array with 2 rows and 3 columns
     // Nested braces represent each row
     int matrix[2][3] =
     {
          {1, 2, 3},  // Row 0
          {4, 5, 6}   // Row 1
     };

     // Modifying an element at Row 1, Column 2 (value 6 becomes 88)
     matrix[1][2] = 88;

     // Displaying the 2D array using nested loops
     cout << "2D Array (Matrix):\n";
     for (int i = 0; i < 2; i++)
     {
          // Outer loop for rows
          for (int j = 0; j < 3; j++)
          {
               // Inner loop for columns
               cout << matrix[i][j] << " ";
          }
          cout << endl; // Newline after each row
     }


     cout << endl
          << "-----------------------" << endl;
     cout << "      3D Array         " << endl;
     cout << "-----------------------" << endl;

     // Declares a 3D array: 2 layers, each containing a 2x3 matrix
     int space[2][2][3] =
     {
          { // Layer 0
               {1, 2, 3},
               {4, 5, 6}
          },
          { // Layer 1
               {7, 8, 9},
               {10, 11, 12}
          }
     };

     // Printing the 3D array using three nested loops
     cout << "3D Array elements:\n";
     for (int i = 0; i < 2; i++)
     {
          // Loop for layers
          cout << "Layer " << i << ":\n";
          for (int j = 0; j < 2; j++)
          {
               // Loop for rows
               for (int k = 0; k < 3; k++)
               {
                    // Loop for columns
                    cout << space[i][j][k] << " ";
               }
               cout << "\n";
          }
          cout << "\n";
     }

     return 0;
}
