#include <iostream>
using namespace std;
int main(){
    long long A,B;
    char op;
    cin>>A>>op>>B;
    if (op=='+') cout<<A+B;
    if (op=='-') cout<<A-B;
    return 0;
}