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
#define getbit(n, i) (((n) & (1LL << (i))) != 0)
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

const ll Goriber_INF = 1e18;
const ll Mod = 1e9 + 7;
const ll N = 2e5 + 12;

struct edge{
    int u,v,w;
};
vector<edge> e;
int n,m,dist[N],par[N];

vi BellmenFord(int s)
{
    vi path;
    for(int i = 1; i <= n; i++){
        dist[i] = Mod;
    }
    dist[s] = 0;
    int x = -1;
    for(int i = 1; i <= n; i++){
        x = -1;
        for(int j = 0; j < m; j++){
            int u = e[j].u;
            int v = e[j].v;
            int w = e[j].w;
            if(dist[u] + w < dist[v]){
                dist[v] = dist[u] + w;
                par[v] = u;
                x = v;
            }
        }
    }
    if(x == -1)return path;
    for(int i = 1; i <= n; i++){
        x = par[x];
    }
    int y = x;
    while(y != x || sz(path) == 0){
        path.push_back(y);
        y = par[y];
    }
    path.push_back(x);
    reverse(all(path));
    return path;
}
void Goriber_solve()
{
    cin >> n >> m;
    for(int i = 1; i <= m; i++){
        int u,v,w;
        cin >> u >> v >> w;
        e.push_back({u,v,w});
    }
    vi ans = BellmenFord(1);
    if(sz(ans) == 0){
        cout << "No Cycle" << endl;
    }
    else{
        cout << "Cycle " << endl;
        for(auto u : ans)cout << u <<" ";
        cout << endl;
    }
}
signed main()
{

    Fokinnir_moto_kaj_koris_na
    int _ = 1,
    h = 0;
    //cin >> _;
    while (_--)
    {
        // cout<<"Case "<<++h<<": ";
        Goriber_solve();
    }
}
/*
4 5
1 2 1
2 4 1
3 1 1
4 1 -3
4 3 -2
*/
