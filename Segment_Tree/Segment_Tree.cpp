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
const ll N = 2e5 +12;
int ar[N];
ll tree[N*4];
ll combine(int a,int b)
{
    return a+b;
}
void init(int node,int b,int e)
{
    if(b == e){
        tree[node] = ar[b];
        return;
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b+e)/2;
    init(Left,b,mid);
    init(Right,mid+1,e);
    tree[node] = combine(tree[Left] , tree[Right]);
}
 
ll query(int node,int b,int e,int i,int j)
{
    if(i>e || j<b)return 0;
    if(i<=b && j>=e){
        return tree[node];
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b+e)/2;
    ll p1 = query(Left,b,mid,i,j);
    ll p2 = query(Right,mid+1,e,i,j);
    return combine(p1,p2);
}
 
void upgrade(int node,int b,int e,int i,int newValue)
{
    if(b == e){
        tree[node] = newValue;
        ar[b] = newValue;
        return;
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b+e)/2;
    if(i <= mid)upgrade(Left,b,mid,i,newValue);
    else upgrade(Right,mid+1,e,i,newValue);
    tree[node] = combine(tree[Left] , tree[Right]);
}

void solve()
{
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> ar[i];
    }
    init(1,1,n);
    cout << query(1,1,n,1,3) << endl;
}
signed main()
{

    Taratari_kaj_kor
    int _=1 , h = 0;
    //cin >> _ ;
    while( _-- ){
       // cout<<"Case "<<++h<<": ";
        solve();
    }
}
