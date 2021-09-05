#include<iostream>
using namespace std;

int main(){
    int a, b, c;
    cin>> a>> b>> c;
    if(a>b){
        if(a>c) cout<<"largest = "<<a;
        else{
            cout<<"largest="<<c;
        }
    }
    else{
        if(b>c) cout<<"largest="<<b;
        else{
            cout<<"largest = "<<c;
        }
    }
    return 0;
}