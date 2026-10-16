#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,j; char e; cin>>i>>e>>j;
        bool f=true;

        if(e=='>'){
            if (i<j || i==j){
                f=false;
            }
        } else if(e=='<'){
            if(i>j || i==j){
            f=false;  
            }
        } else if(e=='='){
            if(i!=j){
                f=false;
            }
        } else{
            f=true;
        }
    if (f){
        cout<<"Right";
    } else{
        cout<<"Wrong";
    }
}