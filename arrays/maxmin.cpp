#include <iostream>
#include <climits>
using namespace std;

void maxmin(int arr[],int n){
int max= INT_MIN;
int min= INT_MAX;

for(int i=0;i<n;i++){
    if(arr[i]<min){
        min=arr[i];    
    }
    else if(arr[i]>max){
        max=arr[i];
    }
}
cout<<"Max and min element are:"<<max <<" "<< min;

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    maxmin(arr,n);
}