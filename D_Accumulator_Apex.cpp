#include<bits/stdc++.h>
using namespace std;

int main(){
    long long x,k; cin>>x>>k;
    while (k>0){
        int d; cin>>d;
        for (int i=0; i<d; i++){
            int e; cin>>e;
            if (x+e>=0){
                x+=e;
            }
        }
        cout<<x;
        k--;
    }
}