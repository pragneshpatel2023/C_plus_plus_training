//============================================================================
// Name        : Switch.cpp
// Author      : Pragnesh Patel
// Version     :
// Copyright   : Your copyright notice
// Description : Testing code for c++
//============================================================================
#include <iostream>

using namespace std;

int main()
{
    char op = '\0';
    double num1 = 0, num2 = 0;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

     // The switch statement evaluates the variable 'op'
     switch (op)
     {
          case '+':
          {
               cout << num1 << " + " << num2 << " = " << (num1 + num2) << std::endl;
               break; // Exits the switch block
          }
          case '-':
          {
               std::cout << num1 << " - " << num2 << " = " << (num1 - num2) << std::endl;
               break;
          }
          case '*':
          {
               cout << num1 << " * " << num2 << " = " << (num1 * num2) << std::endl;
               break;
          }
          case '/':
          {
               if (num2 != 0)
               {
                    std::cout << num1 << " / " << num2 << " = " << (num1 / num2) << std::endl;
               }
               else
               {
                    std::cout << "Error: Division by zero!" << std::endl;
               }
               break;
          }
          default:
          {
               // Executed if 'op' doesn't match any of the cases above
               cout << "Error: Invalid operator!" << std::endl;
               break;
          }
     }

     return 0;
}
