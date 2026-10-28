#include<bits/stdc++.h>
using namespace std;

int main(){
    int q; cin>>q;
    
    while (q>0){
        int a; cin>>a;
        if (a%3==0){
            cout<<"Second"<<"\n";
        } else {
            cout<<"First"<<"\n";
        }
        q--;
    }
}