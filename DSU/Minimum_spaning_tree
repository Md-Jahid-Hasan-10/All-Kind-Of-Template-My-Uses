#include<bits/stdc++.h>

using namespace std;

class DSU{
    vector<int> parent,Size;

public:
    DSU(int n)
    {
        for(int i = 0; i <= n; i++){
            parent.push_back(i);
            Size.push_back(1);
        }
    }
    int find_par(int node)
    {
        if(parent[node] == node){
            return node;
        }
        return parent[node] = find_par(parent[node]);
    }
    void union_size(int u, int v)
    {
        int pu = find_par(u);
        int pv = find_par(v);
        if(pu == pv)return;

        if(Size[pu] < Size[pv]){
            parent[pu] = pv;
            Size[pv] += Size[pu];
        }
        else{
            parent[pv] = pu;
            Size[pu] += Size[pv];
        }
    }
};
int main()
{
    int n,m;
    cin >> n >> m;
    vector<pair<int,pair<int,int>>> edges;
    for(int i = 0; i < m; i++){
        int u,v,w;
        cin >> u >> v >> w;
        edges.push_back({w,{u,v}});
    }
    sort(edges.begin(),edges.end());
    DSU d(n);
    int sum = 0;
    for(auto i : edges){
        int w = i.first;
        int u = i.second.first;
        int v = i.second.second;
        if(d.find_par(u) != d.find_par(v)){
            sum += w;
            d.union_size(u,v);
            cout << u <<" "<< v << " " << w << endl;
        }
    }
    cout << sum << endl;
}
