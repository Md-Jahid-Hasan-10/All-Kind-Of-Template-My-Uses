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
const ll N = (1 << 14) +12;
int n,dp[N],cost[20][20];

int f(int mask)
{
    if(mask == ((1 << n) - 1))return 0;
    int &ret = dp[mask];
    if(ret != -1)return ret;
    int res = INF;
    for(int i = 0; i < n; i++){
        if((mask & (1 << i)) == 0){
            int c = cost[i][i];
            for(int j = 0; j < n; j++){
                if(mask & (1 << j)){
                    c += cost[i][j];
                }
            }
            res = min(res,c + f(mask | (1 << i)));
        }
    }
    ret = res;
}
void solve()
{
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> cost[i][j];
        }
    }
    mem(dp,-1);
    cout << f(0) << endl;
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
