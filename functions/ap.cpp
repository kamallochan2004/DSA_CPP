#include<iostream>
using namespace std;

int ap(int a,int n,int d){
    int term=a + (n - 1) * d;
    return term;
}
int main()
{
    int a,n,d;
    cout<<"Enter first term:"<<endl;
    cin>>a;
    cout<<"Enter value of d:"<<endl;
    cin>>d;
    cout<<"Enter number of term:"<<endl;
    cin>>n;
    cout<<"The nth term of the AP is " <<ap(a,n,d)<<endl;
    return 0;
}