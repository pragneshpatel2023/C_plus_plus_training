//============================================================================
// Name        : Static.cpp
// Author      : Pragnesh Patel
// Version     :
// Copyright   : Your copyright notice
// Description : Testing code for c++
//============================================================================
#include <iostream>
#include <string>

using namespace std;

class Box
{
public:
     static int objectCount; // Declaration inside the class

     Box()
     {
          objectCount++;
     }

     static int add(int a, int b)
     {
          // Static method
          return a + b;
     }
};

// Definition and initialization outside the class (Required before C++17)
int Box::objectCount = 0;

int main()
{
     Box b1;
     Box b2;
     // Both objects share the same counter
     cout << "Total objects: " << Box::objectCount << endl;

     // Called directly using the class name
     cout << "Total: " << Box::add(5, 10) << endl;

}
