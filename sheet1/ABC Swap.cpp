#include <iostream>
using namespace std;
int main(){
    int A,B,C,temp;
    cin>>A>>B>>C;
    temp=A;
    A=B;
    B=temp;
    temp=A;
    A=C;
    C=temp;
    cout<<A<<"\t"<<B<<"\t"<<C;
    return 0;
}