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
    int n;
    cin >> n;
    DSU d(n);

}
