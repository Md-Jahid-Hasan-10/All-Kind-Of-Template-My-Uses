//! In The Name Of ALLAH
//! Author MD Jahid Hasan
//! Studied at IIT Jahangirnagar University
//! Email: 2227jahid@gmail.com

#include <bits/stdc++.h>
using namespace std;

#define int long long
const int N = 10000;
int spt[N][22];
int n,ar[N];
int combine(int a,int b){
	return min(a , b);
}
void buildST()
{
	for (int i = 0; i < n; i++) spt[i][0] = ar[i];

	for (int j = 1; (1 << j) <= n; j++) {
		for (int i = 0; (i + (1 << j) - 1) < n; i++) {
            spt[i][j] = combine(spt[i + (1 << (j - 1))][j - 1] , spt[i][j - 1]);
		}
	}
}

int query(int l, int r)
{
    if(l>r) return INT_MAX;
	int j = (int)log2(r - l + 1);
	return combine(spt[l][j], spt[r - (1 << j) + 1][j]);
}

//! 0 based index -> query O(1),pre compute nlog(n) and support idempotent funtion f(a,a) = a
signed main()
{

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> ar[i];
    }
	buildST();
	cout << query(2 , 3) << endl;
	cout << query(1 , 5) << endl;
	return 0;
}
