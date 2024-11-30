//! In The Name Of Allah
 
/*********************************************************************\
*!          |       *        |       | ___  | @                       |
*!          |      * *       |       |  |   |  @                      |
*!          |     *   *      |       |  |   |   @                     |
*!          |    *******     |-------|  |   |    @                    |
*! |*       |   *       *    |       |  |   |   @                     |
*! |        |  *         *   |       |  |   |  @                      |
*! |________| *           *  |       | ___  | @                       |
*!                                                                    |
*!  codeforces = __Jahid__Noob__                                      |
*!  mail =  2227Jahid@gmail.com                                       |
*!  IIT,Jahangirnagar University(41)                                  |
*!                                                                    |
**********************************************************************/
 
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define pb push_back
#define pob pop_back
#define make M
#define F first
#define S second
#define all(s) (s).begin(), (s).end()
#define rall(s) s.rbegin(), s.rend()
#define sz(x) (int)x.size()
#define mem(a, b) memset(a, b, sizeof(a))
#define log2(x) 31 - __builtin_clz(x)
#define getbit(n, i) (((n) & (1LL << (i))) != 0)
#define msb(x) 31 - __builtin_clz(x)
#define TxtIO                         \
    freopen("sample.in", "r", stdin); \
    freopen("sample.out", "w", stdout);
#define Fokinnir_moto_kaj_koris_na \
    ios_base::sync_with_stdio(0);  \
    cin.tie(0);                    \
    cout.tie(0);
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define PI acos(-1)
 
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
typedef vector<pii> vii;
typedef tuple<int,int,int> tu;
typedef array<int,3> triple;
/*
int p = 237,mod = 1000000289;
auto Goriber_function = [&] (int m) -> int{
 
};
*/
const ll N = 2e5+5;
const ll mod = 1e9 + 7;
const ll inf = 1e18;
struct segmenttree
{
    int n;
    vector<int> st, lazy, islazy;
    void init(int _n)
    {
        this->n = _n;
        st.resize(4 * n, 0);
        lazy.resize(4 * n, 0);
        islazy.resize(4 * n, 0);
    }
    int combine(int a, int b)
    {
        return (a & b);   
    }
    void push(int s, int e, int i)
    {
        if (islazy[i])
        { 
            st[i] = (st[i] | lazy[i]);
            if (s != e)
            {
                lazy[2 * i + 2] = (lazy[2 * i + 2]|lazy[i]);
                lazy[2 * i + 1] = (lazy[2 * i + 1]|lazy[i]);
                islazy[2 * i + 1] = 1;
                islazy[2 * i + 2] = 1;
            }
            lazy[i] = 0;
            islazy[i] = 0;
        }
    }
    void build(int s, int e, int i,vector<ll> &arr)
    {
        if (s == e)
        {
            st[i] = arr[s];
            return;
        }
        int mid = (s + e) / 2;
        build(s, mid, 2 * i + 1,arr);
        build(mid + 1, e, 2 * i + 2,arr);
        st[i] = combine(st[2 * i + 1], st[2 * i + 2]);
    }
    ll query(int s, int e,int l, int r,int i)
    {
        push(s, e, i);
        if (s > r or e < l)
        {
            return (LLONG_MAX);
        }
        if (s >= l and e <= r)
        {
            return st[i];
        }
        int mid = (s + e) / 2;
 
        ll left = query(s, mid, l, r, 2 * i + 1);
        ll right = query(mid + 1, e, l, r, 2 * i + 2);
        return combine(left, right);
    }
    void update_query(int s, int e, int i, int l, int r,int v)
    {
        push(s, e, i);
        if (s > r or e < l)
        {
            return;
        }
        if (s >= l and e <= r)
        {
            lazy[i] = v;
            islazy[i] = 1;
            push(s, e, i);
            return;
        }
        int mid = (s + e) / 2;
 
        update_query(s, mid, 2 * i + 1, l, r, v);
        update_query(mid + 1, e, 2 * i + 2, l, r, v);
 
        st[i] = combine(st[2 * i + 1], st[2 * i + 2]);
        return;
    }
    void build(vector<ll> &v){
        build(0,n-1,0,v);
    }
    int query(ll l,ll r){
        return query(0,n-1,l,r,0);
    }
    void update_query(ll l, ll r, ll x){
        update_query(0,n-1,0,l,r,x);
    }
};
 // 0 based array
void Goriber_solve()
{
    int n,q;
    cin >> n >> q;
    segmenttree tree;
    tree.init(n);
    for(int i = 0; i < q; i++){
        int type;
        cin >> type;
        if(type == 1){
            int l,r,v;
            cin >> l >> r >> v;
            tree.update_query(l,r-1,v);
        }
        else{
            int l,r;
            cin >> l >> r;
            cout << tree.query(l,r-1) << endl;
        }
    }
}
signed main()
{
 
    Fokinnir_moto_kaj_koris_na
    int _ = 1,tc = 0;
    //cin >> _;
    while (_--)
    {
        //cout<<"Case "<<++tc<<": ";
        Goriber_solve();
    }
}
