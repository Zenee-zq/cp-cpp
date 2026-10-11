#include<bits/stdc++.h>
using namespace std;

int main(){
    long long a,b,c,d; cin>>a>>b>>c>>d;
    int i=pow(a,b),j=pow(c,d);
 
    if(i>j){
        cout<<"YES";
    } else {
        cout<<"NO";
    }
    return 0;
}
