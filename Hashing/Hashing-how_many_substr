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

const ll inf = 1e18;
const ll mod = 1e9 + 7;
const ll N = 2e5 + 123;


int get_hash(string &s)
{
    int ans = 0;
    int pr = 1;
    for(int i = 0; i < sz(s); i++){
        ans = (ans + ((s[i] - 'a' + 1) * pr) % mod) % mod;
        pr = (pr * 31) % mod;
    }
    return ans;
}
int how_many(string &s, string &t)
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
    int cnt = 0;
    for(int i = 0; i + S - 1 < T; i++){
        int cur_h = (h_t[i+S] + M - h_t[i]) % M;
        if(cur_h == h_s * p_pow[i] % M){
            cnt++;
        }
    }
    return cnt;
}
void Goriber_solve()
{
    string s;
    cin >> s;
    string la = "ab";
    cout << how_many(la,s) << endl;
    cout << get_hash(s) << endl;
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
