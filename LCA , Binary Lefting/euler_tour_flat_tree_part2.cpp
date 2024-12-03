#include<bits/stdc++.h>
using namespace std;

const int N = 2e5 + 12;
vector<int> graph[N];
vector<int> flat_tree;
map<int,pair<int,int>> mp;
int cnt = 0;
void dfs(int node,int par)
{
    flat_tree.push_back(node);
    mp[node].first = cnt;
    cnt++;
    for(auto child : graph[node]){
        if(child == par)continue;
        dfs(child,node);
    }
    mp[node].second = cnt;
    flat_tree.push_back(node);
    cnt++;
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
