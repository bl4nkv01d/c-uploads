/*
    I saw a post on this and since I thought this
    was useful i 'reposted' it with some comments
    for future or my followers reference. Enjoy
    using it ;)
*/

//regular preprossesers
#include <iostream>
#include <string>
//time preprossesers
#include <chrono>
#include <thread>

using namespace std;    // standard namespace
using namespace chrono; // nanoseconds, system_clock, seconds


int main() {
    
    using namespace this_thread; // sleep_for, sleep_until
    
     // will display one as soon as the program runs
    cout << "one" << endl;
    
    sleep_until(system_clock::now() + seconds(1)); // 'sleeps' for 1 second
    
     // will then display two after it has passed one second
    cout << "two" << endl;
    
     // ends function
    return 0;
}
