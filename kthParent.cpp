#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
const ll N = 1e5;
vector<int> graph[N];
int Level[N],parent[N];
void dfs(int node,int par,int lev)
{
    Level[node] = lev;
    parent[node] = par;
    for(auto u : graph[node]){
        if(u != par){
            dfs(u,node,lev+1);
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
    dfs(1,0,0);
    for(int i = 1; i <= n; i++){
        cout << i <<" p -> " << parent[i] <<" Lev -> " << Level[i] << endl;
    }
    int node,k;
    cin >> node >> k;
    if(Level[node] < k){
        cout << -1 << endl;
    }
    else{
        int kth_par;
        while(k--){
            kth_par = parent[node];
            node = kth_par;
        }
        cout << kth_par << endl;
    }

}
