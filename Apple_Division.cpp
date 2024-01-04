#include <bits/stdc++.h>
using namespace std;
#define endl ("\n")
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define rep(i,n) for(ll i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int main(){
          fastio
          int t = 1;
          while(t--){
         ll n;
         cin>>n;
         ll a[n];
         ll joey = 0;
        rep(i,n){
            cin>>a[i];
            joey+=a[i];
        }
         ll ans =INT_MAX ;
        for(ll i = 0;i<(1<<n);i++){
            ll ross =0;
            for(ll j =0;j<n;j++){
                if(1<<j & i) ross+=a[j];
            }
            ans = min(ans,abs(joey-ross-ross));
        
      
    }
    cout<<ans;
          }
    return 0;
}