#include <iostream>
using namespace std;
int main(){
    int A1,A2,A3,A4,temp;
    cin>>A1>>A2>>A3>>A4;
    temp=A1;
    if (A2<=A1) temp=A2;
    if (temp>=A3) temp=A3;
    if (temp>=A4) temp=A4;
    cout<<temp;
    return 0;
}