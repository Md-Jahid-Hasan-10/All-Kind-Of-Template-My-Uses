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
#define getbit(n, i) (((n) & (1LL << (i))) != 0)
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
typedef double dl;


ll gcd(ll a, ll b) { return __gcd(a, b); }
ll lcm(ll a, ll b) { return a * (b / gcd(a, b)); }

const ll Goriber_INF = 1e18;
const ll Mod = 1e9 + 7;
const ll N = 2e5 + 12;
/*
CF 1993 C problem
There is an apartment consisting of n

rooms, each with its light initially turned off.

To control the lights in these rooms, the owner of the apartment decided to install chips in the rooms so that each room has exactly one chip, and the chips are installed at different times. Specifically, these times are represented by the array a1,a2,…,an
, where ai is the time (in minutes) at which a chip is installed in the i

-th room.

As soon as a chip is installed, it changes the room's light status every k
minutes — it turns on the light for k minutes, then turns it off for the next k minutes, then turns it back on for the next k minutes, and so on. In other words, the light status is changed by the chip at minute ai, ai+k, ai+2k, ai+3k, … for the i-th room.
*/

void Goriber_solve()
{
    int n,k;
    cin >> n >> k;
    vi ar(n);
    for(auto &i : ar)cin >> i;
    sort(all(ar));
    int la = ar.back();
    int ans = la;
    vii range;
    for(auto u : ar){
        int cnt = (la - u)/(2*k);
        u += (cnt*2*k);
        if(la < u + k){
            range.push_back({u ,u + k - 1});
            continue;
        }
        if(la == u + k){
            cout << -1 << endl;
            return;
        }
        range.push_back({u + 2 * k,u + 3 * k - 1});
    }
    int l = 0,r = 2e9;
    for(auto u : range){
        l = max(l,u.F);
        r = min(r,u.S);
        //cout << u.F <<" "<< u.S << endl;
    }
    if(l > r)cout << - 1 << endl;
    else cout << l << endl;
    
}
signed main()
{

    Fokinnir_moto_kaj_koris_na 
    int _ = 1,tc = 0;
    cin >> _;
    while (_--)
    {
        // cout<<"Case "<<++tc<<": ";
        Goriber_solve();
    }
}
