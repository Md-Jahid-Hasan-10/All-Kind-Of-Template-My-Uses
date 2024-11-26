//! In The Name Of Allah

#include <bits/stdc++.h>

using namespace std;

#define int long long
#define endl '\n'

#define Fokinnir_moto_kaj_koris_na \
    ios_base::sync_with_stdio(0);  \
    cin.tie(0);                    \
    cout.tie(0);
struct Bit {
    long long BIT[N];
    void update(int x, int delta) {
        for (; x < N; x += x & -x)
            BIT[x] += delta;
    }
    long long query(int x) {
        long long sum = 0;
        for (; x > 0; x -= x & -x)
            sum += BIT[x];
        return sum;
    }
   long long sum(int l,int r){
       return query(r) - query(l-1);
   }
};
signed main()
{
    Fokinnir_moto_kaj_koris_na
    cin >> n;
    Bit seg;
    for(int i = 1; i <= n; i++){
        cin >> ar[i];
        seg.update(i,ar[i]);
    }
    int q;
    cin >> q;
    while(q--){
        int l,r;
        cin >> l >> r;
        cout << seg.sum(r) << endl;
    }

}
