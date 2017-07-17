
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    
    int numOfRepeats;
    cin >> numOfRepeats;
    for(int i = 0; i < numOfRepeats; i++){
        string userInput;
        string inputOne, inputTwo;
        cin >> userInput;
        for(int j = 0; j < userInput.size(); j++){
            if(j%2==0){
                inputOne += userInput[j];
            }else{
                inputTwo += userInput[j];
            }
        }
        cout << inputOne << " " << inputTwo << endl;
    }
    
    return 0;
}
