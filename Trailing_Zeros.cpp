#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(){
    int n;
    cin>>n;
    int denominator = 5;
    int sum = 0;
    while((n/denominator)>0){
        sum = sum + (n/denominator);
        denominator = denominator*5;
    }
    cout<<sum;
}