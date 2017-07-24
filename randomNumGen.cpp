#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <cstdio>
//just in case headers  ;)
using namespace std;
//namesppaccee
// functs ↓
void introText();
int endGame();
//functs ↑
int main(){
    //random number generator
    int randNumbGenerated = 0;
    srand((unsigned int)time(0));
    randNumbGenerated = 1 + rand()% 10;
    introText();
    int userNum = 0;
    string repeatNum = "re";
    while(repeatNum == "re"){
    cin >> userNum;
    if(userNum >= 11 || userNum < 0){
        cout << "sorry but your number is to high or low.." << endl;
        cout << "please try another number to guess (1-10)" << endl;
    } else repeatNum = "nah";
   }
    int randNumber = randNumbGenerated;
    if(userNum < 10 || userNum >= 0){
        cout << "userNum passes testcase" << endl;
        string repeatGuess = "ye";
        while(repeatGuess == "ye"){
        if(userNum != randNumber){
            cout <<  "wrong guess, try again" << endl;
            randNumbGenerated = 1+(rand())%6;
            cin >> userNum;
        } else if(userNum == randNumber){
            cout << "correct guess" << endl;
            return endGame();
        }
      }
    }
    return endGame();
    //end funct
}
void introText(){
    cout << "welcome to a simple random number guessing, ";
    cout << "(similiar to casino games except just numbers 1-10..) ";
    cout << "however thanks for checking things out, \n";
    cout << "to begin just guessing a number 1 - 10 !" << endl;
}
int endGame(){
    return 0;
}
