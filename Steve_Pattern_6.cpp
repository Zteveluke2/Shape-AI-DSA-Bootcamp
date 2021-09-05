#include<iostream>
using namespace std;

int main(){
    int row = 5, col = 9;
    int gap = 1;
    for(int i = 1; i<= row; i++){
        for(int j =1; j<=col; j++){
            if(j>=6-i && j<=i+4 && gap){
                cout << "*";
                gap = 0;
            }
            else{
                cout<< " ";
                gap = 1;
            }
        }
        cout<<"\n";
    }
    return 0;
}