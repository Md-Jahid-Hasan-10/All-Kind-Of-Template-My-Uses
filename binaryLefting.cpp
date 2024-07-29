#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
const ll N = 2e5;
vector<int> graph[N];
void dfs(int node,int par,vector<vector<int>> &dp){
    dp[node][0] = par;
    for(int i = 1; i <= 20; i++){
        dp[node][i] = dp[dp[node][i-1]][i-1];
    }
    for(auto child : graph[node]){
        if(child != par){
            dfs(child,node,dp);
        }
    }
}
int main()
{
    int n;
    cin >> n;
    for(int i = 1; i < n; i++){
        int u,v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    vector<vector<int>> dp(n+1,vector<int>(22,0));
    dfs(1,0,dp);
    int q;
    cin >> q;
    while(q--){
        int node,k;
        cin >> node >> k;
        for(int i = 20; i >= 0; i--){
            if((k >> i) & 1){
                node = dp[node][i];
            }
        }
        cout << node << endl;
    }

}
