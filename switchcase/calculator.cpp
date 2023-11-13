#include <iostream>
using namespace std;
int main()
{
    int n1, n2;
    char op;
    cout << "Enter first number" << endl;
    cin >> n1;
    cout << "Enter second number" << endl;
    cin >> n2;
    cout << "Enter operator('+','-','*','/','%'): " << endl;
    cin >> op;
    switch (op)
    {
    case '+':
        cout << "The answer is : " << n1 + n2 << endl;
        break;
    case '-':
        cout << "The answer is : " << n1 - n2 << endl;
        break;
    case '*':
        cout << "The answer is : " << n1 * n2 << endl;
        break;
    case '/':
        cout << "The answer is : " << n1 / n2 << endl;
        break;
    case '%':
        cout << "The remainder is :" + n1 % n2 << endl;
        break;
    default:
        cout << "Please select a opertor as specified above!!!!" << endl;
    }
}