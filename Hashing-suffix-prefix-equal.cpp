//! In The Name Of Allah

#include <bits/stdc++.h>

using namespace std;

#define int long long
#define endl '\n'
#define sz(x) (int)x.size()
#define Taratari_kaj_kor                 \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

typedef long long ll;
typedef vector<int> vi;

int Goriber_big_mod(int a,int b,int Mod)
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
int Inverse_Big_mod(int a,int M)
{
    return Goriber_big_mod(a,M-2,M);
}
//! Rolling hash Collesion (1/(Mod1*Mod2))
void solve()
{
    string s;
    cin >> s;
    int n = sz(s);
    int p1 = 31,p2 = 37;
    int mod1 = 1e9 + 7,mod2 = 1e9 + 9;
    vi hash1(n,0),hash2(n,0);
    hash1[0] = hash2[0] = (s[0] - 'a' + 1);
    for(int i = 1; i < n; i++){
        hash1[i] = (hash1[i-1] + (s[i]-'a'+1)*Goriber_big_mod(p1,i,mod1)) % mod1;
        hash2[i] = (hash2[i-1] + (s[i]-'a'+1)*Goriber_big_mod(p2,i,mod2)) % mod2;
    }
    for(int len = 1; len < n; len++){
        int hash1prefix = hash1[len-1];
        int hash2prefix = hash2[len-1];

        int hash1suffix = ((hash1[n-1]-hash1[n-len-1]) * Inverse_Big_mod(Goriber_big_mod(p1,n-len,mod1),mod1))% mod1;
        int hash2suffix = ((hash2[n-1]-hash2[n-len-1]) * Inverse_Big_mod(Goriber_big_mod(p2,n-len,mod2),mod2)) % mod2;

        if((hash1prefix == hash1suffix) && (hash2prefix == hash2suffix)){
            cout << len <<" " ;
        }
    }

}
signed main()
{

    Taratari_kaj_kor
    int _=1 , h = 0;
    //cin >> _ ;
    while( _-- ){
       // cout<<"Case "<<++h<<": ";
        solve();
    }
}
