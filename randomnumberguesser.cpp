#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    //cout << 1 + (rand()%6) << endl;

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
