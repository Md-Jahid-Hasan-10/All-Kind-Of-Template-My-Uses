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
typedef double dl;


ll gcd(ll a, ll b) { return __gcd(a, b); }
ll lcm(ll a, ll b) { return a * (b / gcd(a, b)); }

const ll inf = 1e18;
const ll mod = 1e9 + 7;
const ll N = 2e5 + 123;

struct rH{
    const int k = 239,mod = 1000000207;
    string s;
    int n;
    vi pw,vl;
    rH(string s): s(s),n(sz(s)),pw(n+1),vl(n+1){
        pw[0] = 1,vl[0] = 0;
        for(int i = 0; i < n; i++){
            vl[i+1] = (vl[i] * k % mod + s[i]) % mod;
            pw[i+1] = (pw[i] * k) % mod;
        }
    }
    int h(int l){
        return vl[l];
    }
    int h(int l,int r){
        return (h(r+1) - (h(l) * pw[r-l+1]) % mod + mod) % mod;
    }
};

struct r_H{
    const int k = 237,mod = 1000000289;
    string s;
    int n;
    vi pw,vl;
    r_H(string s): s(s),n(sz(s)),pw(n+1),vl(n+1){
        pw[0] = 1,vl[0] = 0;
        for(int i = 0; i < n; i++){
            vl[i+1] = (vl[i] * k % mod + s[i]) % mod;
            pw[i+1] = (pw[i] * k) % mod;
        }
    }
    int h(int l){
        return vl[l];
    }
    int h(int l,int r){
        return (h(r+1) - (h(l) * pw[r-l+1]) % mod + mod) % mod;
    }
};

void Goriber_solve()
{
    string s,t;
    cin >> s >> t;
    if(sz(s) < sz(t))swap(s,t);
    int n = sz(s),m = sz(t);
    r_H hs1(s);
    r_H hs2(t);
    rH hss1(s);
    rH hss2(t);
    auto Goriber_function = [&] (int mid) -> bool{
        unordered_set<int> st,st2;
        for(int i = 0; i + mid - 1 < n; i++){
            st.insert(hs1.h(i,i + mid - 1));
            st2.insert(hss1.h(i,i + mid - 1));
        }
        for(int i = 0; i + mid - 1 < m; i++){
            int hs = hs2.h(i,i + mid - 1);
            int hss = hss2.h(i,i + mid - 1);
            if(st.find(hs) != st.end() && st2.find(hss) != st.end())return 1;
        }
        return 0;
    };
    int lo = 0,hi = min(n,m),ans = 0;
    while(lo <= hi){
        int mid = (lo + hi)/2;
        if(Goriber_function(mid)){
            ans = mid;
            lo = mid + 1;
        }
        else hi = mid - 1;
    }
    cout << ans << endl;
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
