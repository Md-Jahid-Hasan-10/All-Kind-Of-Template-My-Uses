#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
const ll N = 1e5;
vector<int> graph[N];
int Level[N];
int dp[N][22];

void dfs(int node,int par,int lev){
    dp[node][0] = par;
    Level[node] = lev;
    for(int i = 1; i <= 20; i++){
        dp[node][i] = dp[dp[node][i-1]][i-1];
    }
    for(auto child : graph[node]){
        if(child != par){
            dfs(child,node,lev+1);
        }
    }
}
int get_kth_par(int node,int k)
{
    for(int i = 20; i >= 0; i--){
        if((k >> i) & 1){
            node = dp[node][i];
        }
    }
    return node;
}
int get_lca(int a,int b)
{
    if(Level[a] > Level[b]){
            swap(a,b);
        }
        int k = Level[b] - Level[a];
        b = get_kth_par(b,k);
        if(a == b){
            return a;
        }
        for(int i = 20; i >= 0; i--){
            if(dp[a][i] != dp[b][i]){
                a = dp[a][i];
                b = dp[b][i];
            }
        }
        return dp[a][0];
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
    dfs(1,0,0);
    int q;
    cin >> q;
    while(q--){
        int a,b;
        cin >> a >> b;
        cout << get_lca(a,b) << endl;

    }

}
