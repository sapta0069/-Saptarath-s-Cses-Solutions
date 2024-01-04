#include <bits/stdc++.h>
using namespace std;

int Substring(string s){
          int rep=1,ans=1;
          for(int i=1;i<s.size();i++){
              if(s[i]==s[i-1]){
                ++rep;
              }
              else{
                ans = max(rep,ans);
                rep = 1;

              }

          }
          ans = max(ans,rep);
          return ans;
}
int main()
{
   string s;
   cin>>s;
   cout<<Substring(s);
   return 0;
    
}