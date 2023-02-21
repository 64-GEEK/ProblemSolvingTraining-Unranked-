#include <iostream>
#include<cmath>
using namespace std;
int main(){
    int l,p,q;
    float d;
    cin>>l;
    cin>>p;
    cin>>q;
    d=(p*1.0/(p+q))*l;
    cout<<d;
    return 0;
}