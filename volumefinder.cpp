#include <iostream>

using namespace std;

int volume(int l=1, int w=1, int h=1);

int main()
{
    cout << "enter l,w,h" << endl;
    int Luser, Wuser, Huser;
    cin >> Luser;
    cin >> Wuser;
    cin >> Huser;
    cout << "Your volume is: ";
    cout << volume(Luser,Wuser,Huser) << endl;
}

int volume(int l, int w, int h) {
    return l*w*h;
}
