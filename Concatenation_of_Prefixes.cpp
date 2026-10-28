#include<bits/stdc++.h>
using namespace std;

// this solution is grbage but i did learn something 


int main(){
    int n,q; cin>>n>>q;
    vector<long long> a;
    for (int i=0; i<n; i++){
        long long ai;
        cin>>ai;
        a.push_back(ai);
    }
    vector <long long> b;
    for (long long j: a){
        for(int e=1; e<n; e++){
            for (int l=0; l<e; l++){
                b.push_back(a[l]);
            }
        }
    }

   
    while (q>0){
        int g,h; cin>>g>>h;
        long long c=0;
        for (int x=g; x<=h; x++){
            c+=b[x];
        }
        cout<<c<<"\n";
        q--;
    }
}

