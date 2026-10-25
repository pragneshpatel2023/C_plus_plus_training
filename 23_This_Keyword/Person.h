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
     * @brief Overloaded constructor with name only.
     *
     * Initializes a Person object with the given name and
     * defaults the age to 18.
     *
     * @param personName The name of the person.
     */
    Person(string personName)
    {
        name = personName;
        age = 18;
    }

    /**
     * @brief Overloaded constructor with both name and age.
     *
     * Initializes a Person object with the given name and age.
     *
     * @param personName The name of the person.
     * @param personAge The age of the person.
     */
    Person(std::string personName, int personAge);

    /**
     * @brief Displays the person's details.
     *
     * Prints the name and age to the console.
     */
    void display();
};
#endif /* PERSON_H_ */