#include <iostream>
using namespace std;
int main(){
    int N,K,X,Y,Y_nights;
    cin>>N;
    cin>>K;
    cin>>X;
    cin>>Y;
    Y_nights=N-K;
    if (Y_nights>=0) cout<<(X*K)+(Y*Y_nights);
    else cout<<N*X;
    return 0;
}