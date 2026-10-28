//============================================================================
// Name        : Polymorphism.cpp
// Author      : Pragnesh Patel
// Version     :
// Copyright   : Your copyright notice
// Description : Testing code for c++
//============================================================================
#include <iostream>
#include <string>

using namespace std;

#include <iostream>

class PrintData
{
public:
     void print(int i)
     {
          cout << "Printing int: " << i << endl;
     }
     void print(double f)
     {
          cout << "Printing float: " << f << endl;
     }
};

class Animal
{
public:
     // Virtual function enables runtime mapping
     virtual void makeSound()
     {
          cout << "Some generic animal sound" << endl;
     }
     // Always use a virtual destructor when dealing with runtime polymorphism
     virtual ~Animal() = default;
};

class Dog : public Animal
{
public:
     void makeSound() override
     {    // 'override' keyword prevents signature mismatches
          cout << "Bark!" << endl;
     }
};

class Cat : public Animal
{
public:
     void makeSound() override
     {
          cout << "Meow!" << endl;
     }
};

int main()
{
     PrintData pd;
     pd.print(5);   // Compiler calls print(int)
     pd.print(5.5); // Compiler calls print(double)

     Animal *myAnimal; // Base class pointer

     Dog dogObj;
     Cat catObj;

     myAnimal = &dogObj;
     myAnimal->makeSound(); // Outputs: Bark! (Resolved at runtime)

     myAnimal = &catObj;
     myAnimal->makeSound(); // Outputs: Meow! (Resolved at runtime)
}
