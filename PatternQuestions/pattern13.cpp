#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        char val = 'A' + row - 1;
        while (col <= row)
        {
            cout << val;
            col += 1;
        }
        cout << endl;
        row += 1;
    }
}