#include<iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    int flag = 1;
    for(int i = 2;i<=a-1;i++){
        if(a%i == 0) {
            flag = 0;
            break;
        }
        else{
            flag = 1;
        }
    }
    if(flag==0) cout<< "NOT PRIME ";
    else{
        cout<<"PRIME";
    }
    return 0;
}