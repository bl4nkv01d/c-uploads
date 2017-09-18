/*
  This is Not a pretty script,
  there are alot of things I could've
  fixed, but for the sake of just time
  , I uploaded it how it is...
*/

// preprossesers || headers
#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <stdio.h>
#include <ctype.h>
//password gen
#include <stdlib.h>
#include <time.h>

using namespace std;
using namespace chrono;

int main()
{
    using namespace this_thread;

    
    char passwordArray[36] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',
                            '1','2','3','4','5','6','7','8','9','0'};
    
    cout << "Pick digit of how many letters/numbers you want in your password : ";
    int userPassLength;
    cin >> userPassLength;
    
    for(int finish = 0; finish <= userPassLength; finish++)
    {
        srand(time(NULL));
        int randIndex = rand() % 36;
        cout << passwordArray[randIndex];
        sleep_until(system_clock::now() + seconds(1));
        if(finish >= userPassLength)
        {
            cout << endl;
        }
    }
    
    cout << "would you like to save your password?" << endl;
    cout << "(1). Yes" << endl;
    cout << "(2). No " << endl;
    cout << endl;
    int savePass; cin >> savePass;
    if(savePass == 1)
    {
        system("open /Applications/Notes.app");
    }
    else if(cin.fail())
    {
        return 0;
    }
    else {
        return 0;
    }
    
    
    return 0;
}
