#include <iostream>
using namespace std;

int set(int a)
{
    int count = 0;
    while (a != 0)
    {
        if (a & 1)
        {
            count++;
        }
        a = a >> 1;
        }
        return count;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout<<"The total setbit for "<<a<<" and "<<b <<" is "<<(set(a)+set(b))<<endl;
    return 0;
}