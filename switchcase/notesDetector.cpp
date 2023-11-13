#include <iostream>
using namespace std;
int main()
{
    int amt, notes;
    cout << "Enter amount" << endl;
    cin >> amt;
    cout << "Enter the notes to find quantity" << endl;
    cin >> notes;
    switch (notes)
    {
        case 1:
        cout<<"The notes required for the amount "<< amt << " is " << (amt/1) << endl;
        break;
        case 20:
        cout<<"The notes required for the amount "<< amt << " is " << (amt/20) << endl;
        break;
        case 50:
        cout<<"The notes required for the amount "<< amt << " is " << (amt/50) << endl;
        break;
        case 100:
        cout<<"The notes required for the amount "<< amt << " is " << (amt/100) << endl;
        break;
    }
}