//============================================================================
// Name        : Inheritance.cpp
// Author      : Pragnesh Patel
// Version     :
// Copyright   : Your copyright notice
// Description : Testing code for c++
//============================================================================
#include <iostream>

using namespace std;

// Base (Parent) Class
class Animal
{
public:
     void eat()
     {
          cout << "This animal eats food." << endl;
     }
};

// Derived (Child) Class inheriting publicly from Animal
class Dog : public Animal
{
public:
     void bark()
     {
          cout << "The dog barks." << endl;
     }
};

// Derived (Child) Class inheriting publicly from Animal
class Cat : public Animal
{
public:
     void bark()
     {
          cout << "The Cat Meow." << endl;
     }
};

int main()
{
     Dog myDog;
     myDog.eat();  // Inherited method
     myDog.bark(); // Own method


     Cat myCat;
     myCat.eat();  // Inherited method
     myCat.bark(); // Own method

     return 0;
}
