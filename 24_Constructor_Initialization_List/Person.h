//============================================================================
// Name        : Person.h
// Author      : Pragnesh Patel
// Version     :
// Copyright   : Your copyright notice
// Description : Header file to print a message.
//============================================================================
#ifndef PERSON_H_
#define PERSON_H_

#include <string>

using namespace std;

/**
 * @class Person
 * @brief Represents a person with a name and age.
 *
 * This class demonstrates constructor overloading and
 * provides methods to update and display person details.
 */
class Person {
private:
    /**
     * @brief The name of the person.
     */
    std::string name;

    /**
     * @brief The age of the person.
     */
    int age;

public:
    /**
     * @brief Default constructor.
     *
     * Initializes a Person object with name set to "Unknown"
     * and age set to 0.
     */
    Person();

    /**
     * @brief Overloaded constructor with both name and age.
     *
     * Initializes a Person object with the given name and age.
     *
     * @param personName The name of the person.
     * @param personAge The age of the person.
     */
    Person(string personName, int personAge)
           : name(personName), age(personAge) // <--- Initialization List
    {
        cout << "Constructor body executing for: " << name << "\n";
    }

    /**
     * @brief Displays the person's details.
     *
     * Prints the name and age to the console.
     */
    void display();
};
#endif /* PERSON_H_ */