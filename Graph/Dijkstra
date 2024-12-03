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

int distence[N];
vii graph[N];

void dijkstra(int s, int n)
{
    for(int i = 0; i < n; i++){
        distance[i] = INF;
    }
    distance[s] = 0;
    priority_queue<pii,vii,greater<pii>> pq;
    pq.push({0,s});

    while(!pq.empty()){
        int cur_node = pq.top().S;
        int cur_dist = pq.top().F;
        pq.pop();
        if(cur_dist > distance[cur_node])continue;
        for(auto child_node : graph[cur_node]){
            int cost = child_node.S;
            int node = child_node.F;
            if(cost + cur_dist < distance[node]){
                distance[node] = cost + cur_dist;
                pq.push({distance[node],node});
            }
        }
    }

}
signed main()
{

    Taratari_kaj_kor

    int n,m;
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        int u,v,w;
        cin >> u >> v >> w;
        graph[u].push_back({v,w});
        graph[v].push_back({u,w});
    }

}
