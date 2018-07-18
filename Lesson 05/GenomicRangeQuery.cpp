// you can use includes, for example:
#include <bits/stdc++.h>
typedef long long ll;
#define FI(n) for(ll i=0;i<n;++i)

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
const int N = 1e6, OO = INT_MAX;

int lazy[4 * N], tree[4 * N], arr[4 * N];

int default_val = OO;
int operation(int a, int b) {
	return min(a, b);
}
void build(int p, int l, int r) {
	lazy[p] = -1;
	if (l == r) {
		tree[p] = arr[l];
		return;
	}
	int mid = (l + r) / 2;
	build(2 * p, l, mid);
	build(2 * p + 1, mid + 1, r);
	tree[p] = operation(tree[2 * p], tree[2 * p + 1]);
}

int query(int p, int l, int r, int x, int y) {
	if (y < l || x > r)
		return default_val;
	if (l >= x && r <= y)
		return tree[p];
	int mid = (l + r) / 2;
	int q1 = query(2 * p, l, mid, x, y);
	int q2 = query(2 * p + 1, mid + 1, r, x, y);
	return operation(q1, q2);
}
vector<int> solution(string &S, vector<int> &P, vector<int> &Q) {
    // write your code in C++14 (g++ 6.2.0)
    FI(4*N)
	{
		tree[i] = OO;
		arr[i] = OO;
		lazy[i] = OO;
	}
	FI(S.size())
	{
		int off = 1;

		if (S[i] == 'C')
			off = 2;
		else if (S[i] == 'G')
			off = 3;
		else if (S[i] == 'T')
			off = 4;

		arr[i + 1] = off;
	}
	build(1, 1, S.size());
	for (int i = 0; i < P.size(); i++) {
		P[i]= query(1, 1, S.size(), P[i]+1, Q[i]+1);
	
	}
	return P;
}
