#include<bits/stdc++.h>
using namespace std;

void ch(){
    char i; cin>>i;
    int x=int(i);
    if(x>=65 && x<=90) {
        x=x+32;
        cout <<char(x);
    } else if(x>=97 && x<=122){
        x=x-32;
        cout<<char(x);
    }
}

int main(){
    ch();
    return 0;
}