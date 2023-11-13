#include <iostream>
using namespace std;

int pow(int n1, int n2)
{
    int ans = 1;
    for (int i = 0; i < n2; i++)
    {
        ans=ans*n1;
    }
        return ans;
}

int main()
{
    int a,b;
    cin>>a>>b;
    int ans=pow(a,b);
     cout<<"The answer is " << ans << endl;
    return 0;
}