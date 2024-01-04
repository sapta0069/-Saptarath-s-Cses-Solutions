#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(){
    int n;
    cin>>n;
    int sum = 0;
    vector<int> set1, set2;
    sum = (n * (n + 1)) / 2;
    if (sum % 2 == 0)
    {
        cout << "YES\n";
        int mid = sum / 2;

        for (int i = n; i >= 1; i--)
        {
            if (i <= mid)
            {
                set1.push_back(i);
                mid = mid - i;
            }
            else
                set2.push_back(i);
        }

        cout << set1.size() << "\n";
        for (int i = 0; i < (int)set1.size(); i++)
            cout << set1[i] << " ";
        cout << "\n";
        cout << set2.size() << "\n";
        for (int i = 0; i < (int)set2.size(); i++)
            cout << set2[i] << " ";
    }
    else
        cout << "NO";
}