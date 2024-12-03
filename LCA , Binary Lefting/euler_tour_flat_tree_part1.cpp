#include<bits/stdc++.h>
using namespace std;

const int N = 2e5 + 12;
vector<int> graph[N];
vector<int> flat_tree;
map<int,int> mp;
int cnt = 0;
void dfs(int node,int par)
{
    flat_tree.push_back(node);
    if(mp.find(node) == mp.end()){
        mp[node] = cnt;
    }
    cnt++;
    for(auto child : graph[node]){
        if(child == par)continue;
        dfs(child,node);
        flat_tree.push_back(node);
        cnt++;
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
    dfs(1,0);
    for(auto U : flat_tree){
        cout << U <<" ";
    }
}
