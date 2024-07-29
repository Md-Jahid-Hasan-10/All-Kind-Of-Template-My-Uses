/// In The Name Of Allah

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

vector<pair<int,int>>movement = {
    {1,0},{-1,0},{0,1},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1}
};

const ll INF = 1e18;
const ll Mod = 1e9+7;
const ll N = 2e5+12;
int level[N];
vi graph[N];
int parant[N];

void bfs(int s)
{
    mem(level,-1);
    level[s] = 0;
    parant[s] = -1;
    queue<int> q;
    q.push(s);
    while(!q.empty()){
        int cur_node = q.front();
        q.pop();
        for(auto child : graph[cur_node]){
            if(level[child] == -1){
                level[child] = level[cur_node] + 1;
                parant[child] = cur_node;
                q.push(child);
            }
        }
    }
}
void solve()
{
    int n,m;
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        int u,v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
}

signed main()
{

    Taratari_kaj_kor
    //siv(100005);
    //TxtIO
    int _=1 , h = 0;
    cin >> _ ;
    while( _-- ){
        //cout<<"Case "<<++h<<": ";
        solve();
    }
}
