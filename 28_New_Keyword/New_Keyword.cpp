//============================================================================
// Name        : New_Keyword.cpp
// Author      : Pragnesh Patel
// Version     :
// Copyright   : Your copyright notice
// Description : Testing code for c++
//============================================================================
#include <iostream>

using namespace std;

/**
 * @class Car
 * @brief Represents a car with brand and year attributes.
 *
 * This class demonstrates constructor and destructor behavior
 * when objects are created and destroyed dynamically on the heap.
 */
class Car
{
private:
    /**
     * @brief The brand of the car.
     */
    string brand;

    /**
     * @brief The manufacturing year of the car.
     */
    int year;

public:
    /**
     * @brief Default constructor.
     *
     * Called automatically when a Car object is created.
     * Prints a message indicating that the constructor
     * has been invoked on the heap.
     */
    Car()
    {
        cout << "Constructor has been created on the heap.\n";
    }

    /**
     * @brief Destructor.
     *
     * Called automatically when a Car object is deleted.
     * Prints a message indicating that the object is being
     * destroyed and memory is being freed.
     */
    ~Car()
    {
        cout << "[Destructor]: " << brand
             << " is being destroyed and memory is being freed.\n";
    }

    /**
     * @brief Simulates driving the car.
     *
     * Prints a message showing the car driving at 100 km/h.
     */
    void drive()
    {
        cout << brand << " is driving at 100 km/h!\n";
    }
};

/**
 * @brief Entry point of the program.
 *
 * Demonstrates dynamic allocation of Car objects,
 * usage of member functions, and proper memory cleanup.
 *
 * @return int Returns 0 upon successful execution.
 */
int main()
{
    cout << "--- Program Starting ---\n\n";

    /// Allocating memory dynamically for an array of Car objects
    Car *myCar = new Car[10];

    /// Accessing members using the arrow (->) operator
    myCar->drive();

    cout << "\n--- Preparing to delete ---\n";

    /// Freeing memory and triggering the destructor for each Car object
    delete[] myCar;

    cout << "\n--- Program Ending ---\n";
    return 0;
}