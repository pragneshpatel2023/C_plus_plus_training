//============================================================================
// Name        : Constructor_Inheritance.cpp
// Author      : Pragnesh Patel
// Version     :
// Copyright   : Your copyright notice
// Description : Testing code for c++
//============================================================================
#include <iostream>
#include <string>

using namespace std;

class Parent
{
private:
     string name;

public:
     // Parameterized constructor
     Parent(string n) : name(n)
     {
          cout << "Parent constructor called: " << name << "\n";
     }
};

class Child : public Parent
{
private:
     int age;

public:
     // Explicitly forwarding argument to Parent
     Child(string n, int a) : Parent(n), age(a)
     {
          cout << "Child constructor called: " << age << "\n";
     }
};

class Child_Big : public Parent
{
private:
     int age;

public:
     // Explicitly forwarding argument to Parent
     Child_Big(string n, int a) : Parent(n), age(a)
     {
          cout << "Child_Big constructor called: " << age << "\n";
     }
};


int main()
{
     Child obj("Sager", 31);
     Child obj2("Pragnesh", 29);
}
