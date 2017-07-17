
/*
    this is a basic 
    calculator which can 
    add subtract multiple 
    and divide two numbers
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main()
{
    
    char again = 'R';
    
    while(again == 'r' || again == 'R'){
    //calculator app
    int num1, num2;
    char opr;
    cout << "enter the numbers you want to calculate" << endl;
    cin >> num1 >> num2;
    cout << "enter the operator you want to use" << endl;
    cin >> opr;
    cout << "Calculating... \n" << num1 << " " << opr << " " << num2 << " = ";
    switch (opr) {
        case '+':
            cout << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 * num2 << endl;
            break;
        case '/':
            if(num2 != 0)
            cout << num1 / num2 << endl;
            else
            cout << "invalid" << endl;
            break;
        default:
            cout << "invalid token" << endl;
            break;
    }
        cout << "\n Restarting... \n" << endl;
    }
    return 0;
}
