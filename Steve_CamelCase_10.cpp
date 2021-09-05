#include <bits/stdc++.h>
using namespace std;

int main() {

 string words;
 int cnt = 0;
 cin >> words;
 int len = words.length();
 for(int i = 0; i < len; i++){
        if(words[i]>= 65 && words[i] <= 90)cnt++;
 }
 cout << cnt << endl;
 return 0;
}