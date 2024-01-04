#include<bits/stdc++.h>
#define int long long
#define mod ((int)1e9 +7)
using namespace std;
int32_t main(){
    int n =0;
    cin>>n;
    int result = 1;
    for(int i=1;i<=n;i++){
        result = (2*result);
        if(result>mod)
        result%=mod;
    }
    cout<<result;
}