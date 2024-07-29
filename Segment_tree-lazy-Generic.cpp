//! In The Name Of Allah

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
#define getbit(n,i) (((n) & (1LL << (i))) !=0 )
#define TxtIO   freopen("sample.in","r",stdin); freopen("sample.out","w",stdout);
#define Taratari_kaj_kor                 \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define PI acos(-1)

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef double dl;

const ll INF = 1e18;
const ll Mod = 1e9+7;
const ll N = 2e5+12;
struct segmenttree
{
    int n;
    vector<int> st, lazy;
 
    void init(int _n)
    {
        this->n = _n;
        st.resize(4 * n, LLONG_MAX);
        lazy.resize(4 * n, 0);
    }
    int combine(int a, int b)
    {
        return min(a, b);
    }

    void push(int start, int ending, int node)
    {
        if (lazy[node])
        {
            st[node] += lazy[node];
 
            if (start != ending)
            {
                lazy[2 * node + 1] += lazy[node];
                lazy[2 * node + 2] += lazy[node];
            }
 
            lazy[node] = 0;
        }
    }
 
    void build(int start, int ending, int node, vector<int> &v)
    {
        // leaf node base case
        if (start == ending)
        {
            st[node] = v[start];
            return;
        }
 
        int mid = (start + ending) / 2;
 
        build(start, mid, 2 * node + 1, v);
 
        build(mid + 1, ending, 2 * node + 2, v);
 
        st[node] = combine(st[node * 2 + 1] , st[node * 2 + 2]);
    }
 
    int query(int start, int ending, int l, int r, int node)
    {
        push(start, ending, node);
 
        if (start > r || ending < l)
        {
            return LLONG_MAX;
        }
 
        if (start >= l && ending <= r)
        {
            return st[node];
        }
 
        int mid = (start + ending) / 2;
 
        int q1 = query(start, mid, l, r, 2 * node + 1);
        int q2 = query(mid + 1, ending, l, r, 2 * node + 2);
 
        return combine(q1 , q2);
    }
 
    void update(int start, int ending, int node, int l, int r, int value)
    {
        push(start, ending, node);
 
        if (start > r || ending < l)
        {
            return;
        }
 
        if (start >= l && ending <= r)
        {
            lazy[node] = value;
            push(start, ending, node);
            return;
        }
 
        int mid = (start + ending) / 2;
 
        update(start, mid, 2 * node + 1, l, r, value);
 
        update(mid + 1, ending, 2 * node + 2, l, r, value);
 
        st[node] = combine(st[node * 2 + 1] , st[node * 2 + 2]);
 
        return;
    }
 
    void build(vector<int> &v)
    {
        build(0, n - 1, 0, v);
    }
 
    int query(int l, int r)
    {
        return query(0, n - 1, l, r, 0);
    }
 
    void update(int l, int r, int x)
    {
        update(0, n - 1, 0, l, r, x);
    }
};

void Goriber_solve()
{
    int n,q;
    cin >> n ;
    segmenttree tree;
    tree.init(n);
    vi ar(n);
    for(auto &i : ar)cin >> i;
    tree.build(ar);
    cout << tree.query(1,3) << endl;
    tree.update(1,2,6);
    cout << tree.query(1,3) << endl;
}

signed main()
{

    Taratari_kaj_kor
    int _=1 , h = 0;
    //cin >> _ ;
    while( _-- ){
       // cout<<"Case "<<++h<<": ";
        Goriber_solve();
    }
}
