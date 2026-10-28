#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while (t>0){
        int n,k; cin>>n>>k;
        int c;
        c=(n-(n%k))/k;
        cout<<c<<"\n";
    }
}