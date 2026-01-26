#include <bits/stdc++.h>
using namespace std;

// #define vl vector<long long>
// #define pb push_back
// #define minval -2147483648
// #define maxval 2147483647
// #define ll long long int
// #define f(k, n) for (int i = k; i < n; i++)
// #define nkinput() 
//     int n, k;     
//     cin >> n;     
//     cin >> k;
// #define ninput() 
//     int n;       
//     cin >> n;
// #define arrinput()      
//     vl arr(n);          
//     for (auto &c : arr) 
//         cin >> c;
// #define forl for (int i = 0; i < n; i++)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, s, x;
        cin>>n>>s>>x;
        vector<int> v(n);
        int sum = 0;
        for(int &u: v){
            cin>>u;
            sum += u;
        }
        if((sum-s)% x ==0 && sum<=s){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}   