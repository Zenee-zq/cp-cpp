#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,j; char e; cin>>i>>e>>j;
    int x;
    if(e=='+'){
        x=i+j;
    } else if(e=='-'){
        x=i-j;
    } else if(e=='*'){
        x=i*j;
    } else if(e=='/'){
        x=i/j;
    }
    cout<<x;
}