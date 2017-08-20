/*
    Find the amount of data you
    can use per day (phone data)
*/

#include <iostream>
#include <string>
#include <ctime>

using namespace std;


int main()
{
    
    cout << "Enter the Month Name In a Number: " << endl;
    cout << "(1).  January" << endl;
    cout << "(2).  February" << endl;
    cout << "(3).  March" << endl;
    cout << "(4).  April" << endl;
    cout << "(5).  May" << endl;
    cout << "(6).  June" << endl;
    cout << "(7).  July" << endl;
    cout << "(8).  August" << endl;
    cout << "(9).  September" << endl;
    cout << "(10). October" << endl;
    cout << "(11). November" << endl;
    cout << "(12). December" << endl;
    int monthName; string whileLoopMonth = "ye"; int daysInMonth = 0;
    while(whileLoopMonth == "ye")
    {
        cin >> monthName;
        switch (monthName) {
            case 1:
                cout << "January Selected" << endl;
                whileLoopMonth = "ne";
                daysInMonth = 31;
                break;
            case 2:
                cout << "February Selected" << endl;
                whileLoopMonth = "ne";
                daysInMonth = 28;
                break;
            case 3:
                cout << "March Selected" << endl;
                whileLoopMonth = "ne";
                daysInMonth = 31;
                break;
            case 4:
                cout << "April Selected" << endl;
                whileLoopMonth = "ne";
                daysInMonth = 30;
                break;
            case 5:
                cout << "May Selected" << endl;
                whileLoopMonth = "ne";
                daysInMonth = 31;
                break;
            case 6:
                cout << "June Selected" << endl;
                whileLoopMonth = "ne";
                daysInMonth = 30;
                break;
            case 7:
                cout << "July Selected" << endl;
                whileLoopMonth = "ne";
                daysInMonth = 31;
                break;
            case 8:
                cout << "August Selected" << endl;
                whileLoopMonth = "ne";
                daysInMonth = 31;
                break;
            case 9:
                cout << "September Selected" << endl;
                whileLoopMonth = "ne";
                daysInMonth = 30;
                break;
            case 10:
                cout << "October Selected" << endl;
                whileLoopMonth = "ne";
                daysInMonth = 31;
                break;
            case 11:
                cout << "November Selected" << endl;
                whileLoopMonth = "ne";
                daysInMonth = 30;
                break;
            case 12:
                cout << "December Selected" << endl;
                whileLoopMonth = "ne";
                daysInMonth = 31;
                break;
            default:
                cout << "Invalid Number Selected, try again" << endl;
                cin.clear();
                cin.ignore(256,'\n');
                break;
        }
    }
        cout << "Now enter your Data Limit In GigaBytes: " << endl;
        double dataLimit = 0.0; char whileLoopData = 'y';
        while(whileLoopData == 'y')
        {
            cin >> dataLimit;
            if(cin.fail())
            {
                cin.clear();
                cin.ignore(256,'\n');
            }else
            {
                whileLoopData = 'n';
            }
        }
        
        cout << "Processing.... " << endl;
        cout << "Your limit in megabytes ";
        cout << "per day is: ";
    int sum = dataLimit * 1000 / daysInMonth;
        cout << sum << "mb's" << endl;
    
}
