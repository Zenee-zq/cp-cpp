#include<bits/stdc++.h>
using namespace std;

int main(){
    float i; cin>>i;

    int e=int(i);
    if (i>e){
        cout<<fixed<<setprecision(3);
        cout<<"float "<<e<<" "<<i-e;
    } else if (i==e){
        cout<<"int "<<e;
    }
}