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
int ar[N];

void solve()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> ar[i];
    }
    vi d(n+1,Mod);
    vi id(n+1,-1);
    vi par(n+1,-1);
    d[0] = - Mod;
    for(int i = 0; i < n; i++){
        int j = upper_bound(all(d),ar[i])-d.begin();
        if(d[j-1] < ar[i]){
            d[j] = ar[i];
            id[j] = i;
            par[i] = id[j-1];
        }
    }
    int ans = 0;
    for(int i = 1; i <= n; i++){
        if(d[i] != Mod)ans = i;
    }
    cout << ans << endl;
    int cur = id[ans];
    vi LIS;
    while(cur != -1){
        LIS.push_back(ar[cur]);
        cur = par[cur];
    }
    reverse(all(LIS));
    for(auto u : LIS)cout << u <<" ";
    cout << endl;
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
