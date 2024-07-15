Intersection point of all point left and right ---- > 782B - The Meeting Place Cannot Be Changed 
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
--- ceil(3.4)=4 ---floor(3.4)=3----

true hisab korar jonno --> 
__builtin_popcount(a,b);
last left 1 er por koto zero ase--->
__builtin_clz(a);
odd ta one ase kina--->
__builtin_parity(a);
----------------------------- coin change -------- minimum number of coin use to sum n ----->
ll f(ll amount)
{
    if(amount == 0)return 0;
    if(dp[amount] != -1)return dp[amount];
    ll ans = INT_MAX;
    for(int i = 0; i < n; i++){
        if(amount - coin[i] >= 0)ans = min(ans,f(amount-coin[i])+1);
    }
    return dp[amount] = ans;
}
void solve()
{
    mem(dp,-1);
    cin>>n>>m;
    for(int i = 0; i < n; i++){
        cin>>coin[i];
    }
    ll x = f(m);
    if(x==INT_MAX){
        cout<<-1<<endl;
        return;
    }
    cout<<x<<endl;
}
----------------------------- all posible way to sum n ( 5 = 2 + 2 + 1, 1 + 2 + 2) are different------>
ll f(ll k)
{
    if( k <= 0){
        return k == 0;
    }
    if(dp[k] != -1)return dp[k];
    ll res = 0;
    for(int j = 0; j < m; j++){
        res = (res + f(k - coin[j]))%Mod;
    }
    return dp[k] = res % Mod;
}
void solve()
{
    mem(dp,-1);
    cin >> m >> n;
    for(int i = 0; i < m; i++){
        cin >> coin[i];
    }
   
    cout<<f(n)<<endl;
    
}

----------------------------------> Coin Change 2 ----------->
----- cps ----->
time--> n+(n^2/(2*coin[1])+(n^2/2*coin[2])...+(n^2/2*coin[last-1]);

const ll N = 1e4+12;
int dp[kotoProkarCoin][N];// N porjonto coin bananor upay thakbe
int coin[kotoProkarCoin];
int solve(int i, int n)
{
    if(i==kotoProkarCoin || n==0){
        return n==0;
    }
    if(dp[i][n]!=-1)return dp[i][n];
    int res = 0;
    for(int j=0;j<=n;j++){
        if(n-(j*coin[i])>=0)res += solve(i+1,n-(j*coin[i]));
        else break;
    }
    return dp[i][n]=res;
}

signed main()
{

    Taratari_kaj_kor
    int n;
    mem(dp,-1);
    coin array-->
    while(cin>>n){
        int x = solve(0,n);
        cout<<x<<endl;
    }
}

--------------- luv-->
int dp[311][5005];
    int func(int ind,int amount,vector<int>&coin)
    {
        if(amount==0)return 1;
        if(ind<0)return 0;
        if(dp[ind][amount]!=-1)return dp[ind][amount];
        int ways = 0;
        for(int i=0;i<=amount;i+=coin[ind]){
            ways += func(ind-1,amount-i,coin);
        }
        return dp[ind][amount]=ways;
    }
    int change(int amount, vector<int>& coins) {
        memset(dp,-1,sizeof(dp));
        return func(coins.size()-1,amount,coins);
    }
----------- wight bag dp -----------

int dp[123][N];
int n,sz,w[123],p[123];

int f(int i, int curw){
    if(i>n)return 0;
    if(dp[i][curw]!=-1)return dp[i][curw];
    int res1=0,res2=0;
    if(w[i]+curw<=sz)res1 = p[i]+f(i+1,w[i]+curw);
    res2 = f(i+1,curw);
    dp[i][curw]=max(res1,res2);
    return dp[i][curw];
}

void solve()
{
    cin>>n>>sz;
    for(int i=1;i<=n;i++){
        cin>>w[i]>>p[i];
    }
    mem(dp,-1);
    int ans = f(1,0);
    cout<<ans<<endl;
}
--------------------------> Knapsack 2 ------>
int W,n,w[105],v[105],dp[105][100005];
int f(int i,int curV)
{
    if(curV==0)return 0;
    if(i<0)return 1e15;
    if(dp[i][curV]!=-1)return dp[i][curV];
    int ans = f(i-1,curV);
    if(curV-v[i]>=0)ans = min(ans,f(i-1,curV-v[i])+w[i]);
    return dp[i][curV]=ans;
}
void solve(int tt)
{
    int n,W;
    cin>>n>>W;
    for(int i=0;i<n;i++){
        cin>>w[i]>>v[i];
    }
    for(int i=1e5;i>=0;i--){
        if(f(n-1,i)<=W){
            cout<<i<<endl;
            return;
        }
    }
    return;
}

-------------------------------------> maximum increasing subsequence ----->
int dp[3000];
       int lis(int i,vector<int> &nums)
        {
            int ans=1;
            if(dp[i]!=-1)return dp[i];
            for(int j=0;j<i;j++){
                if(nums[j]<nums[i]){
                    ans = max(ans,lis(j,nums)+1);
                }
            }
            dp[i]=ans;
            return dp[i];
        }
    int lengthOfLIS(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        int n = nums.size();
        int ans = 0;
        for(int i=0;i<n;i++){
            ans = max(ans,lis(i,nums));
        }
        return ans;
    }
--------------------------------------------> Rod cutting ---->
   int dp[2000];
   int f(int len,vector<int> &v)
    {
        if(len==0)return 0;
        if(dp[len]!=-1)return dp[len];
        int ans = 0;
        for(int i=1;i<=v.size();i++){
            if(len-i>=0){
                ans = max(ans,f(len-i,v)+v[i-1]);
            }
        }
        return dp[len]=ans;
    }
    int cutRod(int price[], int n) {
        memset(dp,-1,sizeof(dp));
        vector<int>v(price,price+n);
        return f(n,v);
        
    }
----------------------------------> Longest Common Subsequence ------>
    int dp[1002][1002];
    int lcs(int i, int j, string &a,string &b){
        if(i<0 ||j<0)return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        int ans = lcs(i-1,j,a,b);
        ans = max(ans,lcs(i,j-1,a,b));
        ans = max(ans,lcs(i-1,j-1,a,b)+(a[i]==b[j]));
        dp[i][j] = ans;
        return dp[i][j];
    }
    int longestCommonSubsequence(string text1, string text2) {
        memset(dp,-1,sizeof(dp));
        return lcs(text1.size()-1,text2.size()-1,text1,text2);
    }

------------------------- Codeforces Round 871 (Div. 4) E --> 4 dik ghure boro man ber kora--
const int N = 1010;
bool vis[N][N];
int ar[N][N];
int n,m,cnt ;

int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};

void dfs(int x,int y)
{
    vis[x][y] = 1;
    cnt += ar[x][y];

    for(int i=0;i<4;i++){
        int x1 = x + dx[i];
        int y1 = y + dy[i];
        if(x1<=n && x1 && y1<=m && y1 && !vis[x1][y1] && ar[x1][y1]){
            dfs(x1,y1);
        }
    }

}
void solve(int k)
{
    int x,y;
    int mx = 0;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1; j<=m;j++){
            cin>>ar[i][j];
            vis [i][j] = 0;
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(!vis[i][j] && ar[i][j]){
                cnt = 0;
                dfs(i,j);
                mx = max(cnt,mx);
            }
        }
    }

    cout<<mx<<endl;

}
signed main()
{
	Faster
	int t=1,h=0;
	cin>>t;
	while(t--){
        solve(++h);
	}
	return 0;
}
----------------------------- or process--------------
int ar[1005][1005],vis[1005][1005];
int dx[]={+1,-1,0,0};
int dy[]={0,0,+1,-1};
int n,m;
int chack(int i,int j)
{
    if(i>=n || j>=m || i<0 || j<0 || ar[i][j] == 0)return 0;
    else return 1;
}
 
int dfs(int i,int j)
{
    int res = ar[i][j];
    vis[i][j]=1;
    for(int k=0;k<4;k++){
        int x = i+dx[k];
        int y = j+dy[k];
        if(chack(x,y) && !vis[x][y])res += dfs(x,y);
    }
    return res;
}
 
 
void solve()
{
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            vis[i][j]= 0;
            cin>>ar[i][j];
        }
    }
    int ans = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(!vis[i][j] && ar[i][j])ans = max(ans,dfs(i,j));
        }
    }
    cout<<ans<<endl;
 
}
 
signed main()
{
    Faster
    int t;
   // int x = 0;
    cin>>t;
    while(t--){
        //x++;
        solve();
    }
    return 0;
}

------------------------------------------------------dp pb  frog 1 atcoder-------------------
int n;
int h[100005];
bool vis[100005];
int mn[1000000];

int dp(int x)
{
    if(x==n){
        return 0;
    }
    if(vis[x]==1)return mn[x];
    int res1=INT_MAX,res2=INT_MAX;
    res1=dp(x+1)+abs(h[x]-h[x+1]);
    if(x+2<=n)res2=dp(x+2)+abs(h[x]-h[x+2]);
    vis[x]=1;
    mn[x]=min(res1,res2);
    return mn[x];
}

signed main()
{
    Faster
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>h[i];
    }
    memset(vis,0,100005);
    cout<<dp(0)<<endl;

    return 0;
}

---------------pb thif------------------------- Greedy dp-----------------
#include<bits/stdc++.h>
using namespace std;

int weight[105],cost[105];
int vis[105][105];

int dp(int indx, int cap)
{
    if(indx==-1)return 0;
    if(vis[indx][cap]!=-1)return vis[indx][cap];
    int profit1=INT_MIN,profit2=INT_MIN;
    if(weight[indx]<=cap)profit1=dp(indx-1,cap-weight[indx])+cost[indx];
    profit2=dp(indx-1,cap);
    return vis[indx][cap]= max(profit1,profit2);
}

int main()
{
    int n,cap;
    memset(vis,-1,sizeof(vis));
    cin>>n>>cap;
    for(int i=0;i<n;i++)cin>>weight[i];
    for(int i=0;i<n;i++)cin>>cost[i];
    cout<<dp(n-1,cap)<<endl;

}

------ Recursive function-----

int fact(int n)
{ 
    if(n==0)return 1;
    
    return n*fact(n-1);
}

int dp[1000];
int febonacci(int n)
{
  if(n==0)return 0;
  if(n==1)return 1;
  if(dp[n]!=-1) return dp[n];
  return dp[n]=(f(n-1)+f(n-2));
}
int main(){
for(int i=0;i<n;i++)dp[i]=-1;
cout<<febonacci(5)<<endl;
}
------------ Graph Theory -------------
direct connected----> adjecent node
not direct connected----> richeable node

------ Adjacent Matrix ---------
const int mx=1e5+123;
int main()
{
   int n,m;
   vector<int>adj[mx];
   cin>>n>>m;
   for(int i=1;i<=m;i++){
      int a,b;
      cin>>a>>b;
      adj[a].push_back(b);
      adj[b].push_back(a);
   }
   for(int i=1;i<=n;i++){
    cout<<"Adjacent list of"<<i<<":";
    for(auto u:adj[i])cout<<u<<" ";
    cout<<endl;
   }
 return 0;
}

-------- DFS Function------
const int mx=123;
bool vis[mx];
vector<int>adj[mx];

void dfs(int u)
{
  vis[u]=1;
  for(auto u:adj[u]){
   if(vis[v]==0)dfs(v);
   }
int main()
{
  adj[1].push_back(2);
  adj[2].push_back(1);
  adj[2].push_back(3);
  adj[3].push_back(2);
   
  dfs(1);
}

-------- Connected Component -------

const int mx=30;
int cnt=0;
char c[mx][mx];
int n,m;
int dx[]={+1,-1,0,0}
int dy[]={0,0,-1,+1}
bool vis[mx][mx];

void dfs(int x,int y)
{
 vis[x][y]=1;
 cnt++;
 for(int i=0;i<4;i++){
  int x1=x+dx[i];
  int y1=y+dy[i];
  if(x1>=1 && x1<=n && y1>=1 && y1<=m && !vis[x1][y1] && c[x1][y1]!='#'){
    dfs(x1,y1)
   }
}

int main()
{
 memset(vis,0,sizeof(vis));
 cnt=0;
 cin>>n>>m;
 for(int i=1;i<=n;i++){
  for(int j=1;j<=m;j++){
     cin>>c[i][j];
      if(c[i][j]=='@'){
        x=i,y=j;
        }
     }
  }

  dfs(x,y);
  cout<<cnt<<endl;
  return 0;
}

---------- BFS ----------[L2] class 6
 
const int mx=1e4+123;
inr lev[mx];
vector<int>adj[mx];

void bfs(int s)
{
  memset(lev,-1,sizeof(lev));  
  lev[s]=0;
  queue<int>q;
  q.push(s);
   while(!q.empty()){
     int u=q.front();
      q.pop();
      for(auto v:adj(u)){
       if(lev[v]==-1){
         lev[v]=lev[u]+1;
          q.push(v);
         }
       }
    }
 }

int main()
{
  int t;
  vin>>t;
  while(t--){
  for(int i=0;i<mx;i++)adj[i].clear();

  int n,m;
  cin>>n>>m;
  for(int i=1;i<=m;i++){
  int u,v;
  cin>>u>>v;
  adj[u].push_back(v);
  adj[v].push_back(u);
  }
   bfs(1);
  cout<<lev[n]<<endl;
  }
 return 0;
}



