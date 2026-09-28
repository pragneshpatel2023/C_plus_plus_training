//============================================================================
// Name        : Conditions.cpp
// Author      : Pragnesh Patel
// Version     :
// Copyright   : Your copyright notice
// Description : Testing code for c++
//============================================================================
#include <iostream>

using namespace std;

/**
 * @brief Priority order of relational and logical operators in C++ (highest to lowest):
 *
 * 1.    !               (Logical NOT)    - highest
 * 2.    <, <=, >, >=    (Relational)
 * 3.    ==, !=          (Equality)
 * 4.    &&              (Logical AND)
 * 5.    ||              (Logical OR)    - lowest
 */

int main()
{

    cout << endl
         << "-----------------------" << endl;
    cout << "      Example 1        " << endl;
    cout << "-----------------------" << endl;
    int x = 10;

    // Evaluation:
    // 1. !x executes first. Since x is 10 (non-zero/true), !x becomes 0 (false).
    // 2. Then, 0 < 5 is evaluated, which is true (1).
    bool result1 = !x < 5;

    cout << boolalpha << "Result1: " << result1 << endl;

    cout << endl
         << "-----------------------" << endl;
    cout << "      Example 2        " << endl;
    cout << "-----------------------" << endl;

    int a = 5, b = 3, c = 8;

    // Expression: a > b && c == 8
    // 1. [Relational] 'a > b' (5 > 3) evaluates to true.
    // 2. [Equality]   'c == 8' (8 == 8) evaluates to true.
    // 3. [Logical AND] 'true && true' evaluates to true.
    bool result2 = a > b && c == 8;

    cout << boolalpha << "Result2: " << result2 << endl;

    cout << endl
         << "-----------------------" << endl;
    cout << "      Example 3        " << endl;
    cout << "-----------------------" << endl;

    bool step1 = true;
    bool step2 = false;
    bool step3 = false;

    // Expression: step1 || step2 && step3
    // 1. 'step2 && step3' (false && false) evaluates first to false.
    // 2. 'step1 || false' (true || false) evaluates next to true.
    bool result3 = step1 || step2 && step3;

    cout << boolalpha << "Result3: " << result3 << endl;

    cout << endl
         << "-----------------------" << endl;
    cout << "      Example 4        " << endl;
    cout << "-----------------------" << endl;
    int age = 20;
    int score = 45;

    // Expression to evaluate:
    bool eligible = age >= 18 || score > 50 && !false;

    // Step-by-step compiler evaluation:
    // Step 1 (!):     !false becomes true.
    //                 -> age >= 18 || score > 50 && true
    //
    // Step 2 (> / >=): 'age >= 18' (20 >= 18) becomes true.
    //                 'score > 50' (45 > 50) becomes false.
    //                 -> true || false && true
    //
    // Step 3 (&&):    'false && true' becomes false.
    //                 -> true || false
    //
    // Step 4 (||):    'true || false' becomes true.

    cout << boolalpha << "Eligibility: " << eligible << endl;

    return 0;
}
