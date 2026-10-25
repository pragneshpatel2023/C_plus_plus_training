//============================================================================
// Name        : Print_Msg.h
// Author      : Pragnesh Patel
// Version     :
// Copyright   : Your copyright notice
// Description : Header file to print a message.
//============================================================================
#ifndef CAT_H_
#define CAT_H_

class Cat
{

    /**
     * @brief Defines the cat's mood.
     *
     * A boolean flag indicating whether the cat
     * is mood (`true`) or not (`false`).
     */
    bool mood;

public:
    /**
     * @brief Defines the cat's mood.
     *
     * A boolean flag indicating whether the cat
     * is happy (`true`) or not (`false`).
     */
    bool happy;
    /**
     * @brief Prints a Miaow to the console.
     *
     * This function, when implemented, will display
     * a predefined Miaow using standard output.
     */
    void speak();

    /**
     * @brief Function to set cat mood to happy.
     */
     void makeHappy();

     /**
     * @brief Function to set cat mood to sad.
     */
    void makeSad();
};

#endif /* CAT_H_ */