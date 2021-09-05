#include<iostream>
using namespace std;

int main(){
    int n,d;
    cin>>n;
    int arr[n];
    cin>>d;
    for(int i=0;i<n;cin>>arr[i],i++);
    d=d%n;
    for(int j=d;j<n;j++)
        cout<<arr[j]<<" ";
    
    for(int k=0;k<d;k++)
         cout<<arr[k]<<" ";
    return 0;
}