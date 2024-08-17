//! In The Name Of Allah
#include <bits/stdc++.h>
/*
CF 782B codeforce problem
*/
using namespace std;
#define int long long
#define make M
#define F first
#define S second
#define all(s) (s).begin(), (s).end()
#define rall(s) s.rbegin(), s.rend()
#define sz(x) (int)x.size()
#define TxtIO   freopen("sample.in","r",stdin); freopen("sample.out","w",stdout);
#define Taratari_kaj_kor                 \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

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
typedef long double dl;

const ll INF = 1e9+12;
const ll Mod = 1e9+7;
const ll N = 2e5+12;

void solve()
{
    int n;
    cin >> n;
    vector<dl> x(n),v(n);
    for(int i = 0; i < n ; i++){
        cin >> x[i];
    }
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    auto f = [&] (dl m) -> bool{
        vector<pair<dl,dl>> p;
        for(int i = 0; i < n; i++){
            dl r = x[i] + m*v[i];
            dl l = x[i] - m*v[i];
            p.push_back({l,r});
        }
        dl l = -INF,r = INF;
        for(int i = 0; i < n; i++){
            dl left = p[i].F;
            dl right = p[i].S;
            if(l > right || r < left){
                return 0;
            }
            l = max(l,left);
            r = min(r,right);
        }
        return 1;
    };
    dl lo = 0,hi = INF,ans = INF;
    for(int i = 0; i < 100; i++){
        dl mid = (lo + hi)/2;
        if(f(mid)){
            ans = mid;
            hi = mid;
        }
        else lo = mid;
    }
    cout << setprecision(10) << fixed << ans << endl;

}

signed main()
{

    Taratari_kaj_kor
    int _=1 , h = 0;
    //cin >> _ ;
    while( _-- ){
        //cout<<"Case "<<++h<<": ";
        solve();
    }
}