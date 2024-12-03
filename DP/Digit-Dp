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
int l,r,k,n;
vi digit;
int dp[11][100][100][3];

int sol(int i,int m1,int m2,int f)
{
    if(i == n){
        return m1 == 0 && m2 == 0;
    }
    int &ret = dp[i][m1][m2][f];
    if(ret != -1)return ret;
    int res = 0;
    int lim = (f == 1 ? 9 : digit[i]);
    for(int j = 0; j <= lim; j++){
        res += sol(i+1,(m1*10 + j) % k, (m2 + j) % k,(f || j < digit[i]));
    }
    return ret = res;
}
int cal(int val)
{
    digit.clear();
    while(val > 0){
        digit.push_back(val % 10);
        val /= 10;
    }
    reverse(all(digit));
    n = sz(digit);
    mem(dp,-1);
    return sol(0,0,0,0);
}
void solve()
{
    cin >> l >> r >> k;
    if(k > 90)cout << 0 << endl;
    else cout << cal(r) - cal(l-1) << endl;
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
