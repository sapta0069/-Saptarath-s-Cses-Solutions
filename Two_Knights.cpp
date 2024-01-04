#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int ways =((i*i)*(i*i-1))/2;
        int attacks = 4*(i-1)*(i-2);
        cout<<ways - attacks<<endl;
    }
    return 0;
}
