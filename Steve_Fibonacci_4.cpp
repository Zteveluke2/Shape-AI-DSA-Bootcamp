#include<iostream>
using namespace std;

int main(){
    int n;
    cin>> n;
    int x = 0;
    int y = 1;
    cout <<x <<" "<<y;
    int z = x+y;
    for (int i=3;i<=n;i++){
        cout << " " << z;
        x=y;
        y=z;
        z=x+y;
    }
    return 0;
}