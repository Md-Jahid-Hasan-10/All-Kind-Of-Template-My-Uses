#include<bits/stdc++.h>

using namespace std;
const ll N = 2e5+12;
const ll M = 30;
const ll mod = 1e9 + 7;
const ll inf = 1e18;

void Goriber_solve()
{
    int n,q;
    cin >> n >> q;
    vector<vector<int>> dp(n+1,vector<int>(M+2,0));
    for(int i = 1; i <= n; i++){
        int x;
        cin >> x;
        dp[i][0] = x;
    }
    for(int j = 1; j < M; j++){
        for(int i = 1; i <= n; i++){
            dp[i][j] = dp[dp[i][j-1]][j-1];
        }
    }
    while(q--){
        int node,k;
        cin >> node >> k;
        for(int i = 0; i < M; i++){
            if(k & (1 << i)){
                node = dp[node][i];
            }
        }
        cout << node << endl;
    }
}
