//============================================================================
// Name        : Copy_Constructor.cpp
// Author      : Pragnesh Patel
// Version     :
// Copyright   : Your copyright notice
// Description : Testing code for c++
//============================================================================
#include <iostream>
#include <sstream>

using namespace std;

#include <iostream>
using namespace std;

class MyClass
{
private:
    int value;

public:
    // Constructor
    MyClass(int v) : value(v)
    {
        cout << "Constructor called" << endl;
    }

    // Copy Constructor
    // MyClass(const MyClass &other)
    MyClass(const MyClass &other) : value(other.value)
    {
        // value = other.value;
        cout << "Copy Constructor called" << endl;
    }

    void display() const { cout << "Value: " << value << endl; }
};

int main()
{
    MyClass obj1(10);    // Constructor called

    obj1.display();

    MyClass obj2 = obj1; // copy constructor called

    obj2.display();

    return 0;
}