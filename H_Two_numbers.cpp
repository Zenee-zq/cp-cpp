#include<iostream>
#include<cmath>
using namespace std;

int main(){
    float i,j; cin>>i>>j;
    float x=i/j;

    cout<<"floor "<<i<<" / "<<j<<" = "<<floor(x)<<"\n";
    cout<<"ceil "<<i<<" / "<<j<<" = "<<ceil(x)<<"\n";
    cout<<"round "<<i<<" / "<<j<<" = "<<round(x)<<"\n";
    return 0;
}
