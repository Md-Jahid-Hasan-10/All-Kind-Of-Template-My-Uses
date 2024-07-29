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
const ll N = 123;
string dp[N][N],s1,s2;
bool vis[N][N];
int n1,n2;
string small(string a,string b)
{
    if(sz(a) == sz(b)){
        if(a < b)return a;
        else return b;
    }
    else{
        if(sz(a) > sz(b))return a;
        else return b;
    }
}
string f(int i,int j)
{
    if(i >= n1 || j >= n2)return "";
    if(vis[i][j] == 1)return dp[i][j];
    vis[i][j] = 1;
    string res;
    if(s1[i] == s2[j]){
        res = s1[i] + f(i+1,j+1);
    }
    else{
        string ret1 = f(i+1,j);
        string ret2 = f(i,j+1);

        res = small(ret1,ret2);
    }
    return dp[i][j] = res;
}
void solve()
{
    cin >> s1 >> s2;
    n1 = sz(s1);
    n2 = sz(s2);
    for(int i = 0; i <= n1; i++){
        for(int j = 0; j <= n2; j++){
            dp[i][j].clear();
            vis[i][j] = 0;
        }
    }
    string ans = f(0,0);
    if(sz(ans) == 0)cout << ":( " << endl;
    else cout << ans << endl;
}
signed main()
{

    Taratari_kaj_kor
    int _=1 , h = 0;
    cin >> _ ;
    while( _-- ){
        cout<<"Case "<<++h<<": ";
        solve();
    }
}
