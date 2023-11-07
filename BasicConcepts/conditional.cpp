#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter first number"<< endl;
    cin>>a;
    int b;
    cout<<"Enter second number"<<endl;
    cin>>b;
    if(a>b){
        cout << a <<" is greater";
    }
    else{
        cout << b << " is greater";
    }
}