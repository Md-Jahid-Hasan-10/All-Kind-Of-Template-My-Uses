/// In The Name Of Allah

/// mt19937 mt(chrono::steady_clock::now().time_since_epoch().count());
String to number with mod / string divided with mod ?
int multi(string s,int mod)
{
    int ans = 0;
    for(int i = 0; i < sz(s); i++){
        ans = (ans * 10 + (s[i] - '0')) % mod;
    }
    return ans; // if ans == 0 then mod divided this string
}
#include <bits/stdc++.h>

using namespace std;

//    <-------- Order_Set --------->
 #include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
template <class T>
using ordered_set = tree<T,null_type,less<T>, rb_tree_tag, tree_order_statistics_node_update>;

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
#define Fokinnir_moto_kaj_koris_na                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define PI acos(-1)
#define f(i,n) for(int i = 0; i < n; i++)

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

//debug
template<typename F,typename S>ostream&operator<<(ostream&os,const pair<F,S>&p){return os<<"("<<p.first<<", "<<p.second<<")";}
template<typename T>ostream&operator<<(ostream&os,const vector<T>&v){os<<"{";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<", ";os<<*it;}return os<<"}";}
template<typename T>ostream&operator<<(ostream&os,const set<T>&v){os<<"[";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<",";os<<*it;}return os<<"]";}
template<typename T>ostream&operator<<(ostream&os,const multiset<T>&v) {os<<"[";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<", ";os<<*it;}return os<<"]";}
template<typename F,typename S>ostream&operator<<(ostream&os,const map<F,S>&v){os<<"[";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<", ";os<<it->first<<" = "<<it->second;}return os<<"]";}
#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)
void faltu(){cerr << endl;}
template<typename T>void faltu(T a[],int n){for(int i=0;i<n;++i)cerr<<a[i]<<' ';cerr<<endl;}
template<typename T,typename...hello>void faltu(T arg,const hello&...rest){cerr<<arg<<' ';faltu(rest...);}


ll gcd ( ll a, ll b ) { return __gcd ( a, b ); }
ll lcm ( ll a, ll b ) { return a * ( b / gcd ( a, b ) ); }


int dx[] = { 0, 0, +1, -1, -1, -1, +1, +1 };
int dy[] = { +1, -1, 0, 0, -1, +1, +1, -1 };

//------------------------------ intercet interval -------------->
bool cmp(pair<int, char> &a, pair<int, char> &b){
    if(a.F == b.F){
        return a.S > b.S;
    }
    return a.first < b.first;
}
void Goriber_solve()
{
    int n;
    cin >> n;
    vector<pair<int,char>> p;
    for(int i = 0; i < n; i++){
        int a,b;
        cin >> a >> b;
        p.push_back({a,'s'});
        p.push_back({b,'e'});
    }
    sort(all(p),cmp);
    int st = 0,cnt = 0;
    for(auto u : p){
        //cout << u.F <<" "<< u.S << endl;
        if(u.S == 's'){
            cnt += st;
            st++;
        }
        else st--;
    }
    cout << cnt << endl;
}
// ---------------------> Siv ----------- >

const ll N = 2e5+12;
bitset<N>IsPrime;
vector<int>primes;

void Goriber_siv(int n)
{
    for(int i=3;i<=n;i+=2)IsPrime[i]=1;
    for(int i=2;i<=n;i+=2)IsPrime[i]=0;
    int sq = sqrt(n);
    for(int i=3;i<=sq;i+=2){
        if(IsPrime[i]){
            for(int j = i*i;j<=n;j+=i)IsPrime[j]=0;
        }
    }
    IsPrime[2]=1;
    IsPrime[1]=0;
    primes.push_back(2);
    for(int i=3;i<=n;i+=2){
        if(IsPrime[i]==1)primes.push_back(i);
    }
}
// ------------------------- sort compare ------------ >

bool cmp(pair<int, char> &a, pair<int, char> &b){
    return a.first <= b.first;
}
sort(ara.begin(), ara.end(), [] (int u, int v) {
         return a[u] < a[v];
});

// --------------------------- > big mod --------------- >
const ll Mod = 1e9+7;
const ll N = 1e6+123;
int Goriber_big_mod(int a,int b)
{
    int ans = 1;
    while(b>0){
        if(b&1){
            ans = (ans*a)%Mod;
        }
        a = (a*a)%Mod;
        b >>= 1;
    }
    return ans;
}
// --------------------------------- factorial / nCr -------------- >

int fact[N];
void Goriber_pre()
{
    fact[0]=1;
    for(int i=1;i<N;i++){
        fact[i]=(fact[i-1]*i)%Mod;
    }
}

int Goriber_nCr(int n,int r)
{
    if(n<r)return 0ll;
    return (fact[n]*big((fact[r]*fact[n-r])%Mod,Mod-2))%Mod;
}

auto Goriber_function = [&] (int m) -> int{

};


//-------------------------------- segment tree ------------------->
const ll N = 2e5+12;
int ar[N];
int tree[N*4];
int combine(int a,int b)
{
    return a+b;
}
void init(int node,int b,int e)
{
    if(b == e){
        tree[node] = ar[b];
        return;
    }
    int Left = node * 2;d
    int Right = node * 2 + 1;
    int mid = (b+e)/2;
    init(Left,b,mid);
    init(Right,mid+1,e);
    tree[node] = combine(tree[Left] , tree[Right]);
}
 
int query(int node,int b,int e,int i,int j)
{
    if(i>e || j<b)return -INF;
    if(i<=b && j>=e){
        return tree[node];
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b+e)/2;
    int p1 = query(Left,b,mid,i,j);
    int p2 = query(Right,mid+1,e,i,j);
    return combine(p1,p2);
}
 
void upgrade(int node,int b,int e,int i,int newValue)
{
    if(b == e){
        tree[node] = newValue;
        ar[b] = newValue;
        return;
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b+e)/2;
    if(i <= mid)upgrade(Left,b,mid,i,newValue);
    else upgrade(Right,mid+1,e,i,newValue);
    tree[node] = combine(tree[Left] , tree[Right]);
}
// -------------------------------------- genaric segment tree  ------------------->



template<typename Node, typename Update>
struct SegTree {
	vector<Node> tree;
	vector<ll> arr; // type may change
	int n;
	int s;
	SegTree(int a_len, vector<ll> &a) { // change if type updated
		arr = a;
		n = a_len;
		s = 1;
		while(s < 2 * n){
			s = s << 1;
		}
		tree.resize(s); fill(all(tree), Node());
		build(0, n - 1, 1);
	}
	void build(int start, int end, int index)  // Never change this
	{
		if (start == end)	{
			tree[index] = Node(arr[start]);
			return;
		}
		int mid = (start + end) / 2;
		build(start, mid, 2 * index);
		build(mid + 1, end, 2 * index + 1);
		tree[index].merge(tree[2 * index], tree[2 * index + 1]);
	}
	void update(int start, int end, int index, int query_index, Update &u)  // Never Change this
	{
		if (start == end) {
			u.apply(tree[index]);
			return;
		}
		int mid = (start + end) / 2;
		if (mid >= query_index)
			update(start, mid, 2 * index, query_index, u);
		else
			update(mid + 1, end, 2 * index + 1, query_index, u);
		tree[index].merge(tree[2 * index], tree[2 * index + 1]);
	}
	Node query(int start, int end, int index, int left, int right) { // Never change this
		if (start > right || end < left)
			return Node();
		if (start >= left && end <= right)
			return tree[index];
		int mid = (start + end) / 2;
		Node l, r, ans;
		l = query(start, mid, 2 * index, left, right);
		r = query(mid + 1, end, 2 * index + 1, left, right);
		ans.merge(l, r);
		return ans;
	}
	void make_update(int index, ll val) {  // pass in as many parameters as required
		Update new_update = Update(val); // may change
		update(0, n - 1, 1, index, new_update);
	}
	Node make_query(int left, int right) {
		return query(0, n - 1, 1, left, right);
	}
};

struct Node1 {
	ll val; // may change
	Node1() { // Identity element
		val = 0;	// may change
	}
	Node1(ll p1) {  // Actual Node
		val = p1; // may change
	}
	void merge(Node1 &l, Node1 &r) { // Merge two child nodes
		val = l.val + r.val;  // may change
	}
};

struct Update1 {
	ll val; // may change
	Update1(ll p1) { // Actual Update
		val = p1; // may change
	}
	void apply(Node1 &a) { // apply update to given node
		a.val = val; // may change
	}
};

signed main()
{

    int n;
    cin >> n;
    vector<ll> ar(n);
    for(auto &i : ar)cin >> i;

    SegTree<Node1,Update1> seg = SegTree<Node1,Update1> (n,ar);
    seg.make_update(1,3);
    seg.make_update(2,2);
    cout << seg.make_query(0,4).val << endl;

}
// --------------------------------- generic segment tree lazy propagation -------------------------- >
template<typename Node, typename Update>
struct LazySGT {
    vector<Node> tree;
    vector<bool> lazy;
    vector<Update> updates;
    vector<ll> arr; // type may change
    int n;
    int s;
    LazySGT(int a_len, vector<ll> &a) { // change if type updated
        arr = a;
        n = a_len;
        s = 1;
        while(s < 2 * n){
            s = s << 1;
        }
        tree.resize(s); fill(all(tree), Node());
        lazy.resize(s); fill(all(lazy), false);
        updates.resize(s); fill(all(updates), Update());
        build(0, n - 1, 1);
    }
    void build(int start, int end, int index) { // Never change this
        if (start == end)   {
            tree[index] = Node(arr[start]);
            return;
        }
        int mid = (start + end) / 2;
        build(start, mid, 2 * index);
        build(mid + 1, end, 2 * index + 1);
        tree[index].merge(tree[2 * index], tree[2 * index + 1]);
    }
    void pushdown(int index, int start, int end){
        if(lazy[index]){
            int mid = (start + end) / 2;
            apply(2 * index, start, mid, updates[index]);
            apply(2 * index + 1, mid + 1, end, updates[index]);
            updates[index] = Update();
            lazy[index] = 0;
        }
    }
    void apply(int index, int start, int end, Update& u){
        if(start != end){
            lazy[index] = 1;
            updates[index].combine(u, start, end);
        }
        u.apply(tree[index], start, end);
    }
    void update(int start, int end, int index, int left, int right, Update& u) {  // Never Change this
        if(start > right || end < left)
            return;
        if(start >= left && end <= right){
            apply(index, start, end, u);
            return;
        }
        pushdown(index, start, end);
        int mid = (start + end) / 2;
        update(start, mid, 2 * index, left, right, u);
        update(mid + 1, end, 2 * index + 1, left, right, u);
        tree[index].merge(tree[2 * index], tree[2 * index + 1]);
    }
    Node query(int start, int end, int index, int left, int right) { // Never change this
        if (start > right || end < left)
            return Node();
        if (start >= left && end <= right){
            pushdown(index, start, end);
            return tree[index];
        }
        pushdown(index, start, end);
        int mid = (start + end) / 2;
        Node l, r, ans;
        l = query(start, mid, 2 * index, left, right);
        r = query(mid + 1, end, 2 * index + 1, left, right);
        ans.merge(l, r);
        return ans;
    }
    void make_update(int left, int right, ll val) {  // pass in as many parameters as required
        Update new_update = Update(val); // may change
        update(0, n - 1, 1, left, right, new_update);
    }
    Node make_query(int left, int right) {
        return query(0, n - 1, 1, left, right);
    }
};

struct Node1 {
    ll val; // may change
    Node1() { // Identity element
        val = 0;    // may change
    }
    Node1(ll p1) {  // Actual Node
        val = p1; // may change
    }
    void merge(Node1 &l, Node1 &r) { // Merge two child nodes
        val = l.val + r.val;  // may change
    }
};

struct Update1 {
    ll val; // may change
    Update1(){ // Identity update
        val = 0;
    }
    Update1(ll val1) { // Actual Update
        val = val1;
    }
    void apply(Node1 &a, int start, int end) { // apply update to given node
        a.val = val * (end - start + 1); // may change
    }
    void combine(Update1& new_update, int start, int end){
        val = new_update.val;
    }
};

//---------------------------- lazy seg generic my ---------------------------- >
struct segmenttree
{
    int n;
    vector<int> st, lazy;
 
    void init(int _n)
    {
        this->n = _n;
        st.resize(4 * n, LLONG_MAX);
        lazy.resize(4 * n, 0);
    }
    int combine(int a, int b)
    {
        return min(a, b);
    }

    void push(int start, int ending, int node)
    {
        if (lazy[node])
        {
            st[node] += lazy[node];
 
            if (start != ending)
            {
                lazy[2 * node + 1] += lazy[node];
                lazy[2 * node + 2] += lazy[node];
            }
 
            lazy[node] = 0;
        }
    }
 
    void build(int start, int ending, int node, vector<int> &v)
    {
        // leaf node base case
        if (start == ending)
        {
            st[node] = v[start];
            return;
        }
 
        int mid = (start + ending) / 2;
 
        build(start, mid, 2 * node + 1, v);
 
        build(mid + 1, ending, 2 * node + 2, v);
 
        st[node] = combine(st[node * 2 + 1] , st[node * 2 + 2]);
    }
 
    int query(int start, int ending, int l, int r, int node)
    {
        push(start, ending, node);
 
        if (start > r || ending < l)
        {
            return LLONG_MAX;
        }
 
        if (start >= l && ending <= r)
        {
            return st[node];
        }
 
        int mid = (start + ending) / 2;
 
        int q1 = query(start, mid, l, r, 2 * node + 1);
        int q2 = query(mid + 1, ending, l, r, 2 * node + 2);
 
        return combine(q1 , q2);
    }
 
    void update(int start, int ending, int node, int l, int r, int value)
    {
        push(start, ending, node);
 
        if (start > r || ending < l)
        {
            return;
        }
 
        if (start >= l && ending <= r)
        {
            lazy[node] = value;
            push(start, ending, node);
            return;
        }
 
        int mid = (start + ending) / 2;
 
        update(start, mid, 2 * node + 1, l, r, value);
 
        update(mid + 1, ending, 2 * node + 2, l, r, value);
 
        st[node] = combine(st[node * 2 + 1] , st[node * 2 + 2]);
 
        return;
    }
 
    void build(vector<int> &v)
    {
        build(0, n - 1, 0, v);
    }
 
    int query(int l, int r)
    {
        return query(0, n - 1, l, r, 0);
    }
 
    void update(int l, int r, int x)
    {
        update(0, n - 1, 0, l, r, x);
    }
};

void Goriber_solve()
{
    int n,q;
    cin >> n ;
    segmenttree tree;
    tree.init(n);
    vi ar(n);
    for(auto &i : ar)cin >> i;
    tree.build(ar);
}
//-------------------------------> DSU ------------------------->
class DSU{
    vector<int> parent,Size;

public:
    DSU(int n)
    {
        for(int i = 0; i <= n; i++){
            parent.push_back(i);
            Size.push_back(1);
        }
    }
    int find_par(int node)
    {
        if(parent[node] == node){
            return node;
        }
        return parent[node] = find_par(parent[node]);
    }
    void union_size(int u, int v)
    {
        int pu = find_par(u);
        int pv = find_par(v);
        if(pu == pv)return;

        if(Size[pu] < Size[pv]){
            parent[pu] = pv;
            Size[pv] += Size[pu];
        }
        else{
            parent[pv] = pu;
            Size[pu] += Size[pv];
        }
    }
};
void Goriber_solve()
{
    int n,k;
    cin >> n >> k;
    DSU d(n);
    int ans = 0;
    for(int i = 0; i < k; i++){
        int x,y;
        cin >> x >> y;
        int f1 = d.find_par(x);
        int f2 = d.find_par(y);
        if(f1 == f2){
            ans++;
            continue;
        }
        d.union_size(x,y);
    }
    cout << ans << endl;
}
//-------------------------- > LCA ------------------------------------>
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
int n, m;
int Level[N];
int dp[N][22];

void dfs1(int node,int par,int lev){
    dp[node][0] = par;
    Level[node] = lev;
    for(int i = 1; i <= 20; i++){
        dp[node][i] = dp[dp[node][i-1]][i-1];
    }
    for(auto child : graph[node]){
        if(child != par){
            dfs1(child,node,lev+1);
        }
    }
}
int get_kth_par(int node,int k)
{
    for(int i = 20; i >= 0; i--){
        if((k >> i) & 1){
            node = dp[node][i];
        }
    }
    return node;
}
int get_lca(int a,int b)
{
    if(Level[a] > Level[b]){
            swap(a,b);
        }
        int k = Level[b] - Level[a];
        b = get_kth_par(b,k);
        if(a == b){
            return a;
        }
        for(int i = 20; i >= 0; i--){
            if(dp[a][i] != dp[b][i]){
                a = dp[a][i];
                b = dp[b][i];
            }
        }
        return dp[a][0];
}
int main()
{
    int n;
    cin >> n;
    for(int i = 1; i < n; i++){
        int u,v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    dfs1(1,0,0);
    int q;
    cin >> q;
    while(q--){
        int a,b;
        cin >> a >> b;
        cout << get_lca(a,b) << endl;

    }

}
//-------------------- > Flat tree ---------------->
#include<bits/stdc++.h>
using namespace std;

const int N = 2e5 + 12;
vector<int> graph[N];
vector<int> flat_tree;
map<int,pair<int,int>> mp;
int cnt = 0;
void dfs(int node,int par)
{
    flat_tree.push_back(node);
    mp[node].first = cnt;
    cnt++;
    for(auto child : graph[node]){
        if(child == par)continue;
        dfs(child,node);
    }
    mp[node].second = cnt;
    flat_tree.push_back(node);
    cnt++;
}
int main()
{
    int n;
    cin >> n;
    for(int i = 1; i < n; i++){
        int u,v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    dfs(1,0);
    for(auto U : flat_tree){
        cout << U <<" ";
    }
}
//------------------------ > Binary Indexed Tree ---------------- >
//! In The Name Of Allah

#include <bits/stdc++.h>

using namespace std;

#define int long long
#define endl '\n'

#define Fokinnir_moto_kaj_koris_na \
    ios_base::sync_with_stdio(0);  \
    cin.tie(0);                    \
    cout.tie(0);

const int N = 1e5 + 123;
int tree[4*N],ar[N];
int n;
void update(int pos, int val)
{
    while (pos <= n)
    {
        tree[pos] += val;
        pos += (pos & -pos);
    }
}
int Sum(int pos)
{
    int sum = 0;
    while (pos > 0)
    {
        sum += tree[pos];
        pos -= (pos & -pos);
    }
    return sum;
}
int query(int l,int r)
{
    return Sum(r) - Sum(l-1);
}
signed main()
{
    Fokinnir_moto_kaj_koris_na
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> ar[i];
        update(i,ar[i]);
    }
    int q;
    cin >> q;
    while(q--){
        int l,r;
        cin >> l >> r;
        cout << query(l,r) << endl;
    }

}
//--------------------------- sparce table --------------------------------->
#include <bits/stdc++.h>
using namespace std;
//0 Indexed
#define MX 10000
int spt[MX][22];
int n,ar[MX];
void buildST()
{
	for (int i = 0; i < n; i++) spt[i][0] = ar[i];

	for (int j = 1; (1 << j) <= n; j++) {
		for (int i = 0; (i + (1 << j) - 1) < n; i++) {
            spt[i][j] = min(spt[i + (1 << (j - 1))][j - 1] , spt[i][j - 1]);
		}
	}
}

int query(int l, int r)
{
    if(l>r) return INT_MAX;
	int j = (int)log2(r - l + 1);
	///j = 31 - __builtin_clz(r - l+1);
	return min (spt[l][j], spt[r - (1 << j) + 1][j]);
}

int main()
{

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> ar[i];
    }
	buildST();
	cout << query(4, 7) << endl;
	cout << query(7, 8) << endl;
	return 0;
}

