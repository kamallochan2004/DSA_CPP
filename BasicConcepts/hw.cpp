#include <iostream>
using namespace std;
// To find Case of value
/*int main(){
        char a;
        cout<<"Enter your value:\n";
        cin>>a;
        if(a>=97 && a<=122){
                cout<<"This is lowercase";
        }
        else if(a>65 && a<=90){
                cout<<"This is uppercase";
        }
        else if(a>48 && a<=57){
                cout<<"This is a number";
        }
}*/

// Sum of even numbers
/*int main(){
   int n;
   cin>>n;
   int sum=0;
   int i=0;
   while(i<n){
    i+=2;
    sum+=i;
}
     cout<<"The sum of all even number upto "<<n<<" is "<< sum <<endl;

}*/

// Fahrenheit to celcius
/*
int main(){
    double f,c=0;
    cout<<"Enter value in Fahrenheit\n";
    cin>>f;
    c=(f-32)*5/9;
    cout<<"The value in celcius is "<<c;
}
*/

// Prime or not
int main()
{
        int n;
        cin >> n;
        int i=2;
        while(i<n){
                if(n%i==0){
                        cout<<"Not prime for "<<i<<endl;
                }
                else{
                        cout<<"Prime for "<< i<<endl;
                }
                i+=1;
        }
}