#include<iostream>
using namespace std;

void multp(){
    int a,b; cin>>a>>b;

    if (a%b==0 || b%a==0){
        cout<<"Multiples";
    }
    else{
        cout<<"No Multiples";
    }
}
int main(){

    multp();

}