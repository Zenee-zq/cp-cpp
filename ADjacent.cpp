#include<bits/stdc++.h>
using namespace std;
int main(){
    char a,b,c,d;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    bool f = (a=='A' && d=='D' || a=='D' && d=='A') || (b=='A' && c=='D' || b=='D' && c=='A');
    if (!f){
        cout<<"Yes";
    } else{
        cout<<"No";
    }
    return 0;
}