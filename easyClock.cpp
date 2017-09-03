/*
  Haven't tested this fully for bugs
  but really simple 'clock' used for
  seconds.... (also if you dont en-
  ter an int it will end it, but for
  the sake of already doing that in
  many other files i didn't spend 
  the time doing so)
*/

// preprossesers || headers
#include <iostream>
#include <string>
#include <chrono>
#include <thread>

// namespaces
using namespace std;
using namespace chrono;

// start main
int main()
{
    // another namespace
    using namespace this_thread;
    
    // get user timer
    int timerInt = 0;
    
    // get user input for amount of seconds
    cout << "Enter the amount of time in \nseconds you want to set : "; cin >> timerInt; cout << endl;
    
    // regular for loop
    for(int count = 0; count <= timerInt; timerInt--)
    {
        // update user on time
        cout << "Timer Remaining : " << timerInt << endl;
        // wait a second
        sleep_until(system_clock::now() + seconds(1));
        // print last result when timer is finished
        if(timerInt == 0)
        {
            cout << "Time Limit Reached" << endl;
        }
        // end of for loop
    }
    
    // end main
    return 0;
}
