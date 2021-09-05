#include<iostream>
using namespace std;

int main(){
    int n;
    cin>> n;
    int arr[n];
    int ele;
    for(int i = 0;i<n;i++){
        cin >> ele ;
        arr[i] = ele;
    }
    int lar = arr[0];
    int seclar = -1;
    for(int j = 1; j<n; j++){
        if(arr[j]>lar){
            lar = arr[j];
        }
    }
    for(int j =1; j<n;j++){
        if(arr[j]!=lar){
            if(arr[j]>seclar){
                seclar = arr[j];
            }
        }
    }
    cout<<"\nSecond largest = "<<seclar;
    return 0;
}