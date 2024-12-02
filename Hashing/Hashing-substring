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

vector<int> how_many(string &s, string &t)
{
    int p = 31;
    int M = 1e9 + 7;
    int S = sz(s),T = sz(t);
    vi p_pow(max(S,T));
    p_pow[0] = 1;
    for(int i = 1; i < sz(p_pow); i++){
        p_pow[i] = (p_pow[i-1]*p) % M;
    }
    vi h_t(T+1,0);
    for(int i = 0; i < T; i++){
        h_t[i+1] = (h_t[i] + (t[i]-'a'+1)*p_pow[i]) % M;
    }
    int h_s = 0;
    for(int i = 0; i < S; i++){
        h_s = (h_s + (s[i]-'a'+1)*p_pow[i]) % M;
    }
    vi Ocurrences;
    for(int i = 0; i + S - 1 < T; i++){
        int cur_h = (h_t[i+S] + M - h_t[i]) % M;
        if(cur_h == h_s * p_pow[i] % M){
            Ocurrences.push_back(i);
        }
    }
    return Ocurrences;
}
void solve()
{
    string s,t;
    cin >> s >> t;
    vi ans = how_many(s,t);
    for(auto u : ans)cout << u << " ";
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
