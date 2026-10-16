#include<bits/stdc++.h>
using namespace std;

int main(){
    double i; cin>>i;

    if (i>=0 && i<=25){
        cout<<"Interval [0,25]";
    } else if (i>25 && i<=50){
        cout<<"Interval (25,50]";
    } else if (i>50 && i<=75){
        cout<<"Interval (50,75]";
    } else if (i>75 && i<=100){
        cout<<"Interval (75,100]";
    } else{
        cout<<"Out of Intervals";
    }

    return 0;
}