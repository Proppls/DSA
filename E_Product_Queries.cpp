#include <bits/stdc++.h>
using namespace std;

vector<int> factors(int n) {
    vector<int> res;
    for(int i = 1; i * i <= n; i++) {
        if(n % i == 0) {
            res.push_back(i);
            if(i != n / i)
                res.push_back(n / i);
        }
    }
    return res;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    vector<vector<int>> all_factors;
    for(int i=1; i<=300000; i++){
        all_factors.push_back(factors(i));
    }
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int& x : v){
            cin>>x;
        }
        vector<int> ans(n);
        unordered_set<int> s;

        for(int i=1; i<=n; i++){
            vector<int> f = factors(v[i]);
            for(int x : f){
                s.insert(x);
            }
            for(int x: all_factors[i-1]){
                if(!s.count(x)){
                    ans[i-1] = -1;
                }
            }
            ans[i] = product;
        }
    }
    return 0;
}