#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c; char e,i; cin>>a>>e>>b>>i>>c;
        bool f=true;
        if(e=='+'){
            if (a+b!=c){
                f=false;
                cout<<a+b;
            }
        } else if(e=='-'){
            if(a-b!=c){
                f=false;
                cout<<a-b;
            }
        } else if(e=='*'){
            if(a*b!=c){
                f=false;
                cout<<a*b;
            }
        } else{
            f=true;
        }
    if (f){
        cout<<"Yes";
    }
}