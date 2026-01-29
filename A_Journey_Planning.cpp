#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t=1;
    // cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int& x : v){
            cin>>x;
        }

        long long ans = 0;
        unordered_map<int, long long> mpp;
        for(int i=0; i<n; i++){
            mpp[i-v[i]] += v[i];
        }
        for(auto [key, value] : mpp){
            ans = max(ans, value);
        }
        cout<<ans<<endl;
    }
    return 0;
}