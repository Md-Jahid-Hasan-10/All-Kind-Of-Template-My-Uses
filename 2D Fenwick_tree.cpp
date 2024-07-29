//! In The Name Of Allah

#include <bits/stdc++.h>

using namespace std;

#define int long long
#define endl '\n'

#define Fokinnir_moto_kaj_koris_na \
    ios_base::sync_with_stdio(0);  \
    cin.tie(0);                    \
    cout.tie(0);

struct FenwickTree2D {
    vector<vector<int>> bit;
    int n, m;
    FenwickTree2D(vector<vector<int>> &a):n((int)a.size()),m((int)a[0].size()),bit(n+1,vector<int>(m+1)){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                add(i,j,a[i][j]);
            }
        }
    }
    int sum(int x, int y) {
        int ret = 0;
        for (int i = x+1; i > 0; i -= (i & -i))
            for (int j = y+1; j > 0; j -= (j & -j))
                ret += bit[i][j];
        return ret;
    }

    void add(int x, int y, int delta) {
        for (int i = x+1; i <= n; i += (i & -i))
            for (int j = y+1; j <= m; j += (j & -j))
                bit[i][j] += delta;
    }
    int query(int r1,int c1,int r2,int c2)
    {
        return sum(r2,c2) - sum(r1-1,c2) - sum(r2,c1-1) + sum(r1,c1);
    }
};

signed main()
{

    int n,m;
    cin >> n >> m;
    vector<vector<int>> ar(n,vector<int>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> ar[i][j];
        }
    }
    FenwickTree2D la(ar);
    cout << la.query(1,1,2,2) << endl;
    la.add(2,2,5);
    cout << la.query(1,1,2,2) << endl;
}

