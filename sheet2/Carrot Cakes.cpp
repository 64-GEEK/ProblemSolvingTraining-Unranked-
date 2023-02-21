#include <iostream>
using namespace std;
int main(){
    int n,t,k,d,t_sum;
    cin>>n>>t>>k>>d;
    t_sum=n/k;
    if (n%k!=0) t_sum++;
    if (t * t_sum > t + d) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}