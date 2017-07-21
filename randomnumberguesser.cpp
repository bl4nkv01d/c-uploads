/*
    this is a random number 
    generate { produces a rand single
    digit number then you have to guess
    it } 
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));

    cout << "keep entering numbers until you guess ";
    cout << "correctly " << endl;
    int repeatWhileLoop = 'y';
    while(repeatWhileLoop == 'y'){
    int userinput;
    cin >> userinput;
    if(userinput == 1+(rand()%6)){
        cout <<" you guessed right "<< endl;
        repeatWhileLoop = 'n';
    }else{
        cout << "wrong" << endl;
    }
    }
    return 0;
}
