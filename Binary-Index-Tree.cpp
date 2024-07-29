//! In The Name Of Allah

#include <bits/stdc++.h>

using namespace std;

#define int long long
#define endl '\n'

#define Fokinnir_moto_kaj_koris_na \
    ios_base::sync_with_stdio(0);  \
    cin.tie(0);                    \
    cout.tie(0);

const int N = 1e5 + 123;
int tree[4*N],ar[N];
int n;
void update(int pos, int val)
{
    while (pos <= n)
    {
        tree[pos] += val;
        pos += (pos & -pos);
    }
}
int Sum(int pos)
{
    int sum = 0;
    while (pos > 0)
    {
        sum += tree[pos];
        pos -= (pos & -pos);
    }
    return sum;
}
int query(int l,int r)
{
    return Sum(r) - Sum(l-1);
}
signed main()
{
    Fokinnir_moto_kaj_koris_na
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> ar[i];
        update(i,ar[i]);
    }
    int q;
    cin >> q;
    while(q--){
        int l,r;
        cin >> l >> r;
        cout << query(l,r) << endl;
    }

}
