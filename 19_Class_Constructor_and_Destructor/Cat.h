//============================================================================
// Name        : Cat.h
// Author      : Pragnesh Patel
// Version     :
// Copyright   : Your copyright notice
// Description : Header file to print a message.
//============================================================================
#ifndef CAT_H_
#define CAT_H_

class Cat
{
private:
    /**
     * @brief Defines the cat's mood.
     *
     * A boolean flag indicating whether the cat
     * is happy (`true`) or not (`false`).
     */
    bool happy;
public:
    /**
     * @brief Prints a Miaow to the console.
     *
     * This function, when implemented, will display
     * a predefined Miaow using standard output.
     */
    void speak();

    /**
     * @brief Prints a Sssss to the console.
     *
     * This function, when implemented, will display
     * a predefined Sssss using standard output.
     */
    void speak2();

    /**
     * @brief Default constructor for the Cat class.
     *
     * Initializes a new Cat object. You can extend
     * this to set default values for member variables.
     */
    Cat();

    /**
     * @brief Destructor for the Cat class.
     *
     * Cleans up resources when a Cat object goes
     * out of scope or is explicitly deleted.
     */
    ~Cat();
};
#endif /* CAT_H_ */