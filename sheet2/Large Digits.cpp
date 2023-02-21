#include <iostream>
using namespace std;
int main(){
    int A,B,A_sum,B_sum;
    cin>>A>>B;
    A_sum=(A/100)+(A%100-A%10)/10+(A%10);
    B_sum=(B/100)+(B%100-B%10)/10+(B%10);
    if (A_sum>B_sum) cout<<A_sum;
    else if (B_sum>=A_sum) cout<<B_sum;
    return 0;
}