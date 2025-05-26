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
*!  codeforces = Jahid__Noob                                          |
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
#define cnt_bit(x) __builtin_popcountll(x)
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
#define sum_of(A) accumulate(all(A), 0ll)
#define max_of(A) *max_element(all(A))
#define min_of(A) *min_element(all(A))

typedef long long ll;
typedef double dl;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
typedef vector<pii> vii;
typedef array<int,3> tu;

//#define DEBUG
#define TEM template <class... T>
TEM istream& operator>>(istream& in, pair<T...>& p) { return in >> p.first >> p.second; }
TEM ostream& operator<<(ostream& out, const pair<T...>& p) { return out << '(' << p.first << ", " << p.second << ')'; }
#define def_in(cont) TEM istream& operator>>(istream& in, cont<T...>& A) { for (auto& a : A) in >> a; return in; }
#define def_out(cont) TEM ostream& operator<<(ostream& out, const cont<T...>& A) { int i = 0; auto it = A.begin(); while (it != A.end()) out << &" "[!i++] << *it++; return out; }
def_in(vector) def_in(deque) def_out(vector) def_out(deque) def_out(set) def_out(map) def_out(multiset)

TEM void c_in(T&... args) { ((cin >> args), ...); }
TEM void c_out(const T&... args) { int i = 0; ((cout << &" "[!i++] << args), ...) << '\n'; }
void c_out(bool b) { c_out(b ? "YES" : "NO"); }

#ifdef DEBUG
TEM void c_err(const T&... args) { int i = 0; ((cerr << &" "[!i++] << args), ...) << '\n'; }
#else
#define c_err(...)
#endif
#define dbg(args...) c_err(#args, '=', args)

ll gcd(ll a, ll b) { return __gcd(a, b); }
ll lcm(ll a, ll b) { return a * (b / gcd(a, b)); }

/*
int p = 237,mod = 1000000289;
auto Goriber_function = [&] (int m) -> int{

};
*/
const ll oo = 1e18;
const ll mod = 1e9 + 7;
const ll N = 2e5 + 123;
struct edge {
	int u,v,w,x;
};
vector<edge> e;
int dist[N],par[N],neg[N];
void BellmenFord(int s,int n,int m) {
	for(int i = 0; i <= n; i++) {
		dist[i] = oo,neg[i] = 0;
	}
	dist[s] = 0;
	for(int i = 1; i <= n; i++) {
		for(int j = 0; j < m; j++) {
			int u = e[j].u,v = e[j].v,w = e[j].w;
			if(dist[u] + w < dist[v]) {
				dist[v] = dist[u] + w;
				par[v] = u;
				if(i == n) {
					neg[v] = 1;
				}
			}
		}
	}
}// neg[i] tells it is a part of negative cycle or not

void Goriber_solve()
{
    int n,m,p;
    cin >> n >> m >> p;
    for(int i = 0; i <= n; i++){
        neg[i] = 0;
    }
    e.clear();
    e.resize(m);
    map<pii,int> bd;
    for(int i = 0; i < m; i++){
        int x,y;
        cin >> e[i].u >> e[i].v >> x >> y;
        e[i].w = p * y - x;
    }
    BellmenFord(0,n,m);
    for(int i = 0; i < n; i++){
        if(neg[i]){
            py;
            return;
        }
    }
    pn;
}
signed main()
{
    Fokinnir_moto_kaj_koris_na
    int _ = 1,tc = 0;
    cin >> _;
    while (_--)
    {
        cout<<"Case "<<++tc<<": ";
        Goriber_solve();
    }
}
