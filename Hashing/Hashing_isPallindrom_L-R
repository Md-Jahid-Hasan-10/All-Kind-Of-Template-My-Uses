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
typedef tuple<int,int,int> tu;


ll gcd(ll a, ll b) { return __gcd(a, b); }
ll lcm(ll a, ll b) { return a * (b / gcd(a, b)); }

const ll inf = 1e18;
const ll mod = 1e9 + 7;
const ll N = 2e5;
/*
int p = 237,mod = 1000000289;
auto Goriber_function = [&] (int m) -> int{

};
*/
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

void Goriber_solve()
{
    int n,q;
    cin >> n >> q;
    string s;
    cin >> s;
    string la = s;
    reverse(all(la));
    rH hs(s);
    rH hs2(la);
    while(q--){
        int l,r;
        cin >> l >> r;
        l--,r--;
        int val = hs.h(l,r);
        int x = (n - l - 1);
        int y = x - (r - l);
        //cout << x << " " << y << endl;
        int val2 = hs2.h(y,x);
        if(val == val2){
            cout << "Budada" << endl;
        }
        else{
            if((r - l + 1) & 1){
                cout << "Putata" << endl;
            }
            else {
                cout << "Budada" << endl;
            }
        }
    }
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
