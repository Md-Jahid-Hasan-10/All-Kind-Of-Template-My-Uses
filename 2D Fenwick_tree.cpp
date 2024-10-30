//! In The Name Of Allah

#include <bits/stdc++.h>

using namespace std;

#define int long long
#define endl '\n'

#define Fokinnir_moto_kaj_koris_na \
    ios_base::sync_with_stdio(0);  \
    cin.tie(0);                    \
    cout.tie(0);

template <typename T> class BIT2D {
  private:
	const int n, m;
	vector<vector<T>> bit;
  public:
	BIT2D(int n, int m) : n(n), m(m), bit(n + 1, vector<T>(m + 1)) {}
	void add(int r, int c, T val) {
		r++, c++;
		for (; r <= n; r += r & -r) {
			for (int i = c; i <= m; i += i & -i) { bit[r][i] += val; }
		}
	}
	T rect_sum(int r, int c) {
		r++, c++;
		T sum = 0;
		for (; r > 0; r -= r & -r) {
			for (int i = c; i > 0; i -= i & -i) { sum += bit[r][i]; }
		}
		return sum;
	}
	T rect_sum(int r1, int c1, int r2, int c2) {
		return rect_sum(r2,c2)-rect_sum(r2,c1-1)-rect_sum(r1-1,c2)+rect_sum(r1-1,c1-1);
	}
};

signed main()
{
    int n,m;
    cin >> n >> m;
    vector<vector<int>> ar(n,vector<int>(m));
    BIT2D<int> bit(n, m);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> ar[i][j];
            bit.add(i,j,ar[i][j]);
        }
    }

    cout << bit.rect_sum(1,1,2,2) << endl;
    bit.add(2,2,5);
    cout <<  bit.rect_sum(1,1,2,2) << endl;
}
