//! In The Name Of Allah

#include <bits/stdc++.h>

using namespace std;

#define int long long
#define endl '\n'

#define Fokinnir_moto_kaj_koris_na \
    ios_base::sync_with_stdio(0);  \
    cin.tie(0);                    \
    cout.tie(0);

struct Fenwick_Tree{
    int n;
    vector<int> bit;
    Fenwick_Tree(vector<int> &v){
        this->n = v.size();
        bit.assign(n+1,0);
        for(int i = 0; i < n; i++){
            update(i,v[i]);
        }
    }
    void update(int i,int x)
    {
        for(i++; i <= n; i += (i & -i)){
            bit[i] += x;
        }
    }
    int sum(int i)
    {
        int cnt = 0;
        for(i++; i > 0; i -= (i & -i)){
            cnt += bit[i];
        }
        return cnt;
    }
    int query(int l,int r)
    {
        return sum(r) - sum(l - 1);
    }
};

signed main()
{

    int n;
    cin >> n;
    vector<int> ar(n);
    for(auto &i : ar)cin >> i;
    Fenwick_Tree la(ar);
    cout << la.query(0,2) << endl;
    la.update(2,5);
    cout << la.query(1,2) << endl;
}
