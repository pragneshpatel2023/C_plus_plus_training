//============================================================================
// Name        : Static_Library.cpp
// Author      : Pragnesh Patel
// Version     :
// Copyright   : Your copyright notice
// Description : Testing code for c++
//============================================================================

#include <iostream>
#include "my_math.h"

int main()
{
     std::cout << "Result: " << MyMath::add(5, 3) << std::endl;
     return 0;
}

//  g++ Static_Library.cpp -L. -lmy_math -o my_program