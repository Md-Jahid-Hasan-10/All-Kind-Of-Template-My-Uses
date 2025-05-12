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

const ll INF = 1e10;
const ll Mod = 1e9+7;
const ll N = 2e5+12;

void solve()
{
    int n;
    cin >> n;
    vii ar;
    for(int i = 0; i < n; i++){
        int a,b;
        cin >> a >> b;
        ar.push_back({a,b});
    }
    auto f = [&] (dl time) -> bool
    {
        vector<pair<dl,dl>> p;
        for(auto u : ar){
            dl l = u.F - (time*u.S);
            dl r = u.F + (time*u.S);
            p.push_back({l,r});
        }
        dl left = - 1e10,right = 1e10;
        for(auto u : p){
            dl l = u.F,r = u.S;
            if(r < left || l > right)return 0;
            left = max(left,l);
            right = min(right,r);
        }
        return 1;
    };
    dl lo = 0, hi = 1e9+2,ans = 1e10,mid;
    for(int i = 0; i < 100; i++){
        mid = (lo + hi)/2;
        if(f(mid)){
            hi = mid;
            ans = min(ans,mid);
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
