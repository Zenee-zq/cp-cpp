#include<bits/stdc++.h>
using namespace std;

void ord(int a, int b, int c){
    vector<int> num{ a, b, c};
    sort (num.begin(), num.end());
    cout<<num[0]<<"\n"<<num[1]<<"\n"<<num[2]<<endl;

}

int main(){
    int x,y,z; cin>>x>>y>>z;

    ord(x,y,z);

    cout<<"\n"<<x<<"\n"<<y<<"\n"<<z;
    return 0;
}