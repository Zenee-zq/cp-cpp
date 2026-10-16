#include<bits/stdc++.h>
using namespace std;

int main(){
    int i; cin>>i;
    int y= i/365;
    int m= (i - y*365)/30;
    int d= i-((m*30)+(y*365));

    cout<<y<<" years"<<"\n";
    cout<<m<<" months"<<"\n";
    cout<<d<<" days";

    return 0;
}