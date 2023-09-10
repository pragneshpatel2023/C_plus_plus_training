//============================================================================
// Name        : Use_of_flash.cpp
// Author      : Pragnesh Patel
// Version     :
// Copyright   : Your copyright notice
// Description : flush keyword testting in c++
//============================================================================

#include <iostream>
#include <thread>
#include <chrono>

#define TEST_FLUSH  0

using namespace std;


int main( void )
{
    uint32_t loop = 0;
    for( loop =1; loop <= 5; loop++ )
    {
#if ( TEST_FLUSH == 1 )        
        cout << loop << " " << flush;
#else
        cout << loop << " ";
#endif
        this_thread::sleep_for( chrono::seconds(1) ); 
    }
    cout << endl;
}

