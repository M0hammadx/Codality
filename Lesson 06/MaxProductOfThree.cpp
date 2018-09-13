// you can use includes, for example:
#include <bits/stdc++.h>
using namespace std;
#define FI(n) for(int i=0;i<n;++i)
#define FJ(n) for(int j=0;j<n;++j)
#define FK(n) for(int k=0;k<n;++k)

int solution(vector<int> &A) {

	sort(A.begin(), A.end());
	int n = A.size();
	int mx = INT_MIN;
	if (n < 6) {
		FI(n)
		{
			FJ(n)
			{
				FK(n)
				{
					if (i != j && j != k && k != i)
						mx = max(mx, A[i] * A[j] * A[k]);
				}
			}
		}
		return mx;
	}
	vector<int> v = { A[0], A[1], A[2], A[n - 3], A[n - 2], A[n - 1] };
	FI(6)
	{
		FJ(6)
		{
			FK(6)
			{
				if (i != j && j != k && k != i)
					mx = max(mx, v[i] * v[j] * v[k]);
			}
		}
	}
	return mx;

}

